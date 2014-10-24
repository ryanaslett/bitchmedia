<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
  "http://www.w3.org/TR/html4/loose.dtd">
<HTML lang='en'>
<HEAD>
	<TITLE> Web Host Sample </TITLE>
</HEAD>
<BODY>
<P> This sample code is designed to connect to PaymentXP using the Web Host Interface.   Response will be displayed on the screen after post method. </P>
<HR />

<?php

// Post URL
$postURL = "https://webservice.paymentxp.com/wh/webhost.aspx";

//Set Post Array
$postArray = array
(
	//Post Parameters
	"TransactionType"			=> "CreditCardCharge",
	"MerchantID"		=> "10012",
	"MerchantKey"			=> "C22A63EE-2E7A-4ACE-96AC-0958DC8D953F",
  "CustomerID"  => "2048",
  //"TransactionAmount" => "50.00",
  //"CustomerName" => "Ryan",
	"CardNumber"		=> "4111111111111111",
	"ExpirationDateMMYY"	=> "0115",
	"CardExpirationDate"	=> "0116",
	"TransactionAmount"			=> "19.99",
	"BillingNameFirst"			=> "John",
	"BillingNameLast"		=> "Doe",
	"BillingFullName"		=> "John Doe",
	"BillingAddress"			=> "455 Abc Street",
	"BillingZipCode"		=> "92708",
	"BillingCity"		=> "Santa Ana",
	"BillingState"		=> "CA",
);


//Generate post String
$postString = "";
foreach( $postArray as $key => $value )
	{ $postString .= "$key=" . urlencode( $value ) . "&"; }
$postString = rtrim( $postString, "& " );


// This sample code uses the CURL library for php to establish an HTTP POST
// To find out if Curl is enabled. Include code below on your page.  Then searh for the word Curl.

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
