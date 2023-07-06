<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Pertemuan 4 | PWL</title>
</head>
<body>
    <main>
        <article>
            <h1>Data Handling</h1>
            <form action="#" method="post" name="mhsForm">
                <table id="mhsFormTable">
                    <tr>
                        <td><label for="namaMhs">Nama</label></td>
                        <td><input type="text" name="namaMhs" id="alamatMhs"></td>
                    </tr>
                    <tr>
                        <td><label for="alamatMhs">Alamat</label></td>
                        <td><input type="text" name="alamatMhs" id="alamatMhs" required></td>
                    </tr>
                    <tr>
                        <td><label for="#">Jenis Kelamin</label></td>
                        <td>
                            <input type="radio" name="jenisKelamin" id="laki-laki" value="Laki-Laki" required>
                            <label for="laki-laki">Laki-Laki</label>
                            <input type="radio" name="jenisKelamin" id="perempuan" value="Perempuan" required>
                            <label for="perempuan">Perempuan</label>
                        </td>
                    </tr>
                    <tr>
                        <td><label for="#">Pekerjaan</label></td>
                        <td>
                            <input type="checkbox" name="pns" id="pns" value="PNS">
                            <label for="pns">PNS</label>
                            <input type="checkbox" name="swasta" id="swasta" value="Swasta">
                            <label for="swasta">Swasta</label>
                            <input type="checkbox" name="polisi" id="polisi" value="Polisi">
                            <label for="polisi">Polisi</label>
                        </td>
                    </tr>
                    <tr>
                        <td></td>
                        <td><input type="submit" name="submit" value="Submit"></td>
                    </tr>
                </table>
            </form><br>
            <table>
                <?php
                    if(isset($_POST["submit"])) {
                        $namaMhs = $_POST["namaMhs"];
                        $alamatMhs = $_POST["alamatMhs"];
                        $jenisKelamin = $_POST["jenisKelamin"];
                        if (isset($_POST["pns"])) {
                            $pekerjaanMhs = $_POST["pns"];
                        } elseif (isset($_POST["swasta"])) {
                            if(isset($_POST["pns"])) {
                                $pekerjaanMhs = $_POST["pns"];
                            } elseif (isset($_POST["polisi"])) {
                                $pekerjaanMhs = $_POST["polisi"];
                            } else {
                                $pekerjaanMhs = $_POST["swasta"];
                            }
                        } elseif (isset($_POST["polisi"])) {
                            if(isset($_POST["pns"])) {
                                $pekerjaanMhs = $_POST["pns"];
                            } else {
                                $pekerjaanMhs = $_POST["polisi"];
                            }
                        }
                        echo "<tr>";
                        echo "<th>Nama<th>";   
                        echo "<td>" . $namaMhs . "</td>"; 
                        echo "<tr>";
                        echo "<tr>";
                        echo "<th>Alamat<th>";   
                        echo "<td>" . $alamatMhs . "</td>"; 
                        echo "<tr>";
                        echo "<tr>";
                        echo "<th>Jenis Kelamin<th>";   
                        echo "<td>" . $jenisKelamin . "</td>"; 
                        echo "<tr>";
                        echo "<tr>";
                        echo "<th>Pekerjaan<th>";   
                        echo "<td>" . $pekerjaanMhs . "</td>"; 
                        echo "<tr>";
                    }
                ?>
            </table>
        </article>
    </main>
</body>
</html>