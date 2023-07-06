<?php 
    include "price.php";

    $hotel = new Hotels("Bersama");
    $prices = new Price($hotel -> hotels());
    $name = "Will";

    echo "Selamat Datang" . "<br>";
    echo "Pada program ini, Data yang digunakan adalah sebagai berikut :" . "<br>";
    echo "Nama : $name" . "<br>";

    $room = "C12";
    $type = "Single";

    echo "Room : $room" . "<br>";
    echo "Type : $type" . "<br>";

    echo "Kesimpulan : " . "<br>";

    $hotel -> rent_room($room, $type, $name);

    $hotel -> inform();

    if($hotel -> get_type() == "Family") {
        $price = $prices -> family_type(); 
    } else if($hotel -> get_type() == "Single") {
        $price = $prices -> single_type();
    }

    $prices -> inform();


