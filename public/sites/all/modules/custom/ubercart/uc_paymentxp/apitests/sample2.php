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
"MerchantID"		=> "10012",
	"MerchantKey"			=> "C22A63EE-2E7A-4ACE-96AC-0958DC8D953F",  
	//Post Parameters
/*"TransactionType" => "ACHDebit",
"RoutingNumber" => "123006800",
"AccountNumber" => "0635560071",
"BankAccountType" => "1",
"AccountName" => "Ryan Aslett",
"Amount" => "135.40",
"ReferenceNumber" => "215",
"Description" => "1x+CANTEEN-CHERRY",
"ProcessDate" => "11132010",
"ACHCheckType" => "1",
"CheckNumber" => " ",
"MerchantID" => "10012 ",
"MerchantKey" => "C22A63EE-2E7A-4ACE-96AC-0958DC8D953F",

	
	"CardNumber"		=> "4111111111111111",
	"ExpirationDateMMYY"	=> "0115",
	"TransactionAmount"			=> "19.99",
	"BillingNameFirst"			=> "John",
	"TransactionType"			=> "CreditCardCharge",
	"BillingNameLast"		=> "Doe",
	"BillingFullName"		=> "John Doe",
	"BillingAddress"			=> "455 Abc Street",
	"BillingZipCode"		=> "92708",
	"BillingCity"		=> "Santa Ana",
	"BillingState"		=> "CA",*/
    'TransactionType' => 'AddCustomer',

    // Customer Information
    'CustomerID' => '1000',
    'CustomerName' => 'Ryan Aslett',
    'LastName' => 'Aslett',
    'FirstName' => 'Ryan',
    'Address' => '637 SE 17th Ave, APT B',
    'City' => "Portland",
    'State' => "OR",
    'Zip' => "97214",
    'Country' => "United States",
    'Phone' => "5037647266",
    'Email' => "paymentxp@ryanaslett.com",
    
    // ACH Details
    'BankName' => "Wells Fargo",
    'AccountName' => "Ryan Aslett",
    "RoutingNumber" => "123006800",
    "AccountNumber" => "0635560071",

    // Card Details
    'CardNumber' => '',
    'ExpirationDateMMYY' => '',
);



//Generate post String
$postString = "";
foreach( $postArray as $key => $value )
	{ $postString .= "$key=" . urlencode( $value ) . "&"; }
$postString = rtrim( $postString, "& " );


$request = curl_init($postURL); // Initiate
curl_setopt($request, CURLOPT_HEADER, 0); 
curl_setopt($request, CURLOPT_RETURNTRANSFER, 1); 
curl_setopt($request, CURLOPT_POSTFIELDS, $postString); //HTTP POST
curl_setopt($request, CURLOPT_SSL_VERIFYPEER, FALSE); 
$post_response = curl_exec($request); // Execute
curl_close ($request); // Close

//Write reponse
$structure = array();
$response = explode('&', $post_response);
array_pop($response);
foreach ($response as $item){
$parts = explode('=', $item);
$structure[$parts[0]] = $parts[1];
}
var_dump($structure);


?>

</BODY>
</HTML>
