<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
  "http://www.w3.org/TR/html4/loose.dtd">
<HTML lang='en'>
<HEAD>
  <TITLE> Web Host Sample </TITLE>
</HEAD>
<BODY>
<P> This sample code is designed to connect to PaymentXP using the Web Host Interface. Response will be displayed on the screen after post method. </P>
<HR />
<?php
// Post URL
$postURL = "https://webservice.paymentxp.com/wh/webhost.aspx";

//Set Post Array
$postArray = array
(
  //Post Parameters

  "BillingAddress" => "4850 NE 40th Ave",
  "BillingCity" => "Portland",
  'BillingCountry' => "United States",
  "BillingFullName" => "Ryan Aslett",
  "BillingNameFirst" => "Ryan",
  "BillingNameLast" => "Aslett",
  "BillingState" => "OR",
  "BillingZipCode" => "97211",
  "CardNumber" => "4111111111111111",
  "ClerkID" => "Website",
  "ClientIPAddress" => "127.0.0.1",
  // Customer Information
  'CustomInfo1' => 'UserID: 1',
  'CustomInfo2' => '2x ISSUE-61-Food, 1x BOOK-GAYGENIUS',
  'CustomInfo3' => FALSE,
  'CVV2' => "322",
  'EmailAddress' => "bitchd7@mixologic.com",
  "ExpirationDateMMYY" => "0715",
  'PhoneNumber' => "503-764-72",
  'ReferenceNumber' => '81995',

  "TransactionAmount" => "31.95",
  "TransactionType" => "CreditCardCharge",
  "MerchantID" => "10012",
  "MerchantKey" => "C22A63EE-2E7A-4ACE-96AC-0958DC8D953F",

);


//Generate post String
$postString = "";
foreach( $postArray as $key => $value )
{
  $postString .= "$key=" . urlencode( $value ) . "&";
}
$postString = rtrim( $postString, "& " );


$request = curl_init($postURL); // Initiate
curl_setopt($request, CURLOPT_HEADER, 0);
curl_setopt($request, CURLOPT_RETURNTRANSFER, 1);
curl_setopt($request, CURLOPT_POSTFIELDS, $postString); //HTTP POST
curl_setopt($request, CURLOPT_SSL_VERIFYPEER, FALSE);
$post_response = curl_exec($request); // Execute
curl_close ($request); // Close

//Write reponse
echo $post_response
?>
</BODY>
</HTML>
