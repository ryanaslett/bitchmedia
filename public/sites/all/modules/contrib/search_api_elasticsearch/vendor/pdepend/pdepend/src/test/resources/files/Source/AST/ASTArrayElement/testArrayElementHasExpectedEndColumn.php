<?php
function testArrayElementHasExpectedEndColumn($a, $b, $c)
{
    return array(
        'Qa
           foo'
              =>  array(
                1 => &$a,
                    'foo'  =>  $b,
                        &$c // Qafdoo
                            )
    );
}
