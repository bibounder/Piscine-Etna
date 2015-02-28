#!/usr/bin/env php
<?php
// my_fibo_rec.php for  in /home/paolin_t/Algo1/defi1
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 20 09:38:38 2014 PAOLINI Tom
// Last update Mon Oct 20 09:38:39 2014 PAOLINI Tom
//

// suite de Fibonnacci, 0, 1, 1, 2, 3, 5, 8, 13, 21, etc. Cette fonction est recursive.
function my_fibo_rec($n)
{
if ($n < 2)
	return $n;
else
	return my_fibo_rec($n - 1) + my_fibo_rec($n - 2);
}

echo my_fibo_rec(2) . "\n";



// microtime() retourne le timestamp Unix, avec les microsecondes
function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

echo $time_start = microtime_float() . "\n";