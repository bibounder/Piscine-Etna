#!/usr/bin/env php
<?php
// my_fact_rec.php for  in /home/paolin_t/Algo1/defi1
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 20 09:38:05 2014 PAOLINI Tom
// Last update Mon Oct 20 09:38:06 2014 PAOLINI Tom
//

// $n est un entier, cette fonction renvoi la factorielle de cet entier (ex: 4! = 1*2*3*4). Si $n est négatif, on renvoi 0, cette fonction est récursive.
function my_fact_rec($n)
{
    if ($n < 0)
    	return 1;
    else if ($n <= 1) 
    	return 1;
    return $n * my_fact_rec($n - 1);
}

echo my_fact_rec(1) . "\n";




// microtime() retourne le timestamp Unix, avec les microsecondes
function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

echo $time_start = microtime_float() . "\n";