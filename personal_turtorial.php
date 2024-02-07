<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
    $name = "Anthony";
echo "Hello world $name </br>";
echo "Willia is good";

#varible scope in php
#global
$txt="paawillie";
#local scope
function mytest(){
    $me=54;
    echo "<p> Hi, am a local varible $me</p>";
    global $txt;
    echo "<h3>$txt is a good boy <br></h3>";
};
mytest();
echo  "$txt"; #can not access the global variable here

function  add($x,$y){
    static $x=10;
    $x +=$y;
    return $x;
    $x++;
    echo "$x";
}; 
add(0,30);



?>
</body>
</html>