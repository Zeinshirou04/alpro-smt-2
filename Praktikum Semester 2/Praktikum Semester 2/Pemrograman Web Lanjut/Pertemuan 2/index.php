<?php

function factorial($int_A) {
    if ($int_A == 0) {
        return 1;
    } else {
        return $int_A * factorial($int_A - 1);
    }
}

$int_A = 5;
$int_B = 10;

echo "5 + 10 is equal to : ", $int_A + $int_B, nl2br("\n");
echo "5 - 10 is equal to : ", $int_A - $int_B, nl2br("\n");
echo "5 * 10 is equal to : ", $int_A * $int_B, nl2br("\n");
echo "5 / 10 is equal to : ", $int_A / $int_B, nl2br("\n");

echo "5! is equal to : ", factorial($int_A);