#!/usr/bin/env php
<?php
// my_power_it.php for  in /home/paolin_t/Algo1/defi1
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 20 09:37:35 2014 PAOLINI Tom
// Last update Mon Oct 20 09:39:51 2014 PAOLINI Tom
//

// $base a la puissance $exp, cette fonction est itérative
function my_power_it($base, $exp)
{
for ($res = $base; $exp > 1; $exp--)
	$res *= $base;

if ($exp == 0)
	$res = 1;

else if ($exp < 0)
	$res = 0;

return $res;
}

echo my_power_it(5, 2) . "\n";



// microtime() retourne le timestamp Unix, avec les microsecondes
function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

echo $time_start = microtime_float() . "\n";