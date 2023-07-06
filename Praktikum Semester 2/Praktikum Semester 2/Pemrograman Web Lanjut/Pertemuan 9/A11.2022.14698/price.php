<?php
    require_once "hotels.php";

    class Price extends Hotels {

        // Variables
        protected $price;

        // Override Methods
        public function inform() {
            echo "Kamar yang anda pesan akan dikenakan harga {$this -> price}" . "<br>";
        }

        // Methods
        public function family_type() {
            $this -> price = 5.99; 
            return $this -> price;   
        }
        
        public function single_type() {
            $this -> price = 2.99;
            return $this -> price;   
        }

        public function __destruct() {
            echo "Program telah selesai dan data telah dibersihkan" . "<br>";
        }
    }