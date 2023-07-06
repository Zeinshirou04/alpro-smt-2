<?php
    class Hotels {

        // Variables
        public $room;
        public $type;
        public $floor;
        public $name;
        public $hotel_name;

        // Default Construct
        public function __construct($name) {
            $this -> hotel_name = $name;
        }

        // Methods
        public function inform() {
            echo "Pemilik kamar {$this -> room} adalah {$this -> name}" . "<br>";
        }

        public function room_type($type) {
            $this -> type = $type;
        }

        public function get_type() {
            return $this -> type;
        }
        
        public function customer_name($name) {
            $this -> name = $name;
        }

        public function get_room() {
            return $this -> room;
        }

        public function hotels() {
            return $this -> hotel_name;
        }

        public function rent_room($room, $type, $name) {
            $this -> customer_name($name);
            $this -> room_type($type);
            if($this -> room == NULL) {
                $this -> room = $room;
            }
        }
    }