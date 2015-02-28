#!/usr/bin/env php
<?php
// my_fact_it.php for  in /home/paolin_t/Algo1/defi1
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 20 09:38:14 2014 PAOLINI Tom
// Last update Mon Oct 20 09:38:15 2014 PAOLINI Tom
//

// $n est un entier, cette fonction renvoi la factorielle de cet entier (ex: 4! = 1*2*3*4). Si $n est négatif, on renvoi 0, cette fonction est itérative.
function my_fact_it($n)
{
  if ($n < 0)
  	return (0);
  else if ($n == 0)
  	return (1);
  
  $resultat = 1;
  for ($i = 1; $i <= $n; $i++)
	$resultat *= $i;
  return $resultat;
}

echo my_fact_it(4) . "\n";





// microtime() retourne le timestamp Unix, avec les microsecondes
function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

echo $time_start = microtime_float() . "\n";