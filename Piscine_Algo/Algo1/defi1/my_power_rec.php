#!/usr/bin/env php
<?php
// my_power_rec.php for  in /home/paolin_t/Algo1/defi1
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 20 09:37:50 2014 PAOLINI Tom
// Last update Mon Oct 20 09:37:53 2014 PAOLINI Tom
//

// $base a la puissance $exp, cette fonction est récursive
function my_power_rec($base, $exp)
{
if ($exp > 1)
	return $base *= my_power_rec($base, $exp - 1);
else if ($exp < 0)
	$base = 0;
else if ($exp == 0)
	$base = 1;
return $base;
}

echo my_power_rec(5, 2) . "\n";


// microtime() retourne le timestamp Unix, avec les microsecondes
function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

echo $time_start = microtime_float() . "\n";
