<?php


/**
 * Migrate the Users
 */
class BitchMigrateUserMigration extends DrupalUser6Migration {
  public function __construct(array $arguments) {
     // Set the machine name to the thing we put in the database.
    $this->machineName = 'BitchMediaUser';
    $arguments['group_name'] = 'BitchMedia';
    $arguments['role_migration'] = 'BitchMediaRole';

    // Have to use old school file_function because this software
    // Is a total steaming pile of shit.
    //$this->options['file_function'] = 'MigrateFileFid';
    // I take that back. You have to pass in --file_function="MigrateFileFid" from the command line cause this whole thing is one massive, steaming pile of shit.

    parent::__construct($arguments);

    $this->machineName = 'BitchMediaUser';
    $this->description = 'User Import overrides';
    $this->addFieldMapping('field_real_name', 'full_name');
    $this->addFieldMapping('field_website:field_link_url:value','field_website');
    $this->addFieldMapping('field_website:field_link_label:value','field_website:title');
    $this->addFieldMapping('field_profile_photo', 'field_profile_image')
         ->sourceMigration('ModBitchMediaUserPictures');

    $this->loadFieldMappings();
    $this->storedFieldMappingsRetrieved = TRUE;
    unset($this->storedFieldMappings['field_real_name']);
//    $this->storedFieldMappings['field_website:field_link_url:value'] = $this->storedFieldMappings['field_website:field_link_url_value'];
//    $this->storedFieldMappings['field_website:field_link_label:value'] = $this->storedFieldMappings['field_website:field_link_label_value'];
//    $this->storedFieldMappings['field_website:field_link_url:value']->destinationField = 'field_website:field_link_url:value';
//    $this->storedFieldMappings['field_website:field_link_label:value']->destinationField = 'field_website:field_link_label:value';
    unset($this->storedFieldMappings['field_website:field_link_url_value']);
    unset($this->storedFieldMappings['field_website:field_link_label_value']);

    $this->storedFieldMappings['field_short_bio:format']->callbacks(array($this, 'mapFormat'));
    $this->storedFieldMappings['field_signature:format']->callbacks(array($this, 'mapFormat'));
    $this->machineName = 'ModBitchMediaUser';

    // Lets just override the damn format mappings here.
    $this->formatMappings = array(1 => 'brief_wysiwyg',
                                  2 => 'raw_html',
                                  3 => 'wysywyg_format',
                                  4 => 'wysywyg_format',
                                  5 => 'raw_html',
    );

    $this->rollbackBatchSize = 500;
    $this->highwaterField = array(
      'name' => 'uid',
      'alias' => 'u',
      'type' => 'int',
    );

  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $row->full_name = $row->field_first_name . ' ' . $row->field_last_name;

  }
  /**
   * Actions to take after a user account has been saved.
   *
   * @param $account
   * @param $row
   */
  public function complete($account, $row) {
    // If we've migrated a picture, update its ownership
    if (!empty($this->destinationValues->field_profile_photo)) {
     db_update('file_managed')
          ->fields(array('uid' => (int)$account->uid))
          ->condition('fid', (int)$account->field_profile_photo['und'][0]['fid'])
          ->execute();
      }
  }
}

/**
 * Pull user pictures in their own migration class, based on normal file migration.
 */
class BitchProfilePictureMigration extends DrupalFile6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->highwaterField = array(
      'name' => 'fid',
      'alias' => 'f',
      'type' => 'int',
    );
  }

  /**
   * We override the file query to get the pictures from the user table.
   *
   * @return SelectQueryInterface
   */
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('files', 'f')
      ->fields('f')
      ->orderBy('timestamp');
    $query->leftJoin('content_type_profile', 'ctp', 'ctp.field_profile_image_fid = f.fid');
    $query->isNotNull('ctp.field_profile_image_fid');
    return $query;
  }

}


class BitchMigrateFileMigration extends DrupalUser6Migration {
  public function __construct(array $arguments) {
    // Set the machine name to the thing we put in the database.
    $this->machineName = 'BitchMediaFile';
    $arguments['group_name'] = 'BitchMedia';

   // I dont remember why this is here. Maybe I need to make the user_migration argument something?
   // $arguments['role_migration'] = 'BitchMediaRole';

    parent::__construct($arguments);

    $this->machineName = 'BitchMediaFile';
    $this->description = 'File Import overrides';
    $this->loadFieldMappings();
    $this->storedFieldMappingsRetrieved = TRUE;
    $this->machineName = 'ModBitchMediaFile';
    $this->rollbackBatchSize = 500;
    $this->highwaterField = array(
      'name' => 'fid',
      'alias' => 'f',
      'type' => 'int',
    );

  }

  /**
   * We override the file query to get the files that are *not* pictures from the user table.
   *
   * @return SelectQueryInterface
   */
  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('files', 'f')
      ->fields('f')
      ->orderBy('timestamp');
    $query->leftJoin('content_type_profile', 'ctp', 'ctp.field_profile_image_fid = f.fid');
    $query->isNull('ctp.field_profile_image_fid');
    return $query;
  }

}
