#!/usr/bin/env php
<?php
// my_fibo_it.php for  in /home/paolin_t/Algo1/defi1
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 20 13:37:15 2014 PAOLINI Tom
// Last update Mon Oct 20 13:45:34 2014 PAOLINI Tom
//

// suite de Fibonnacci, 0, 1, 1, 2, 3, 5, 8, 13, 21, etc. Cette fonction est itérative.
function my_fibo_it($n)
{ 
  $defi = 0;
  $fibo1 = 1;
  $fibo2 = 0;
  if ($n >= 1)
    for ($i = 0; $n > $i; $i++)
      {
	      $defi = $fibo1 + $fibo2;
       	$fibo1 = $fibo2;
      	$fibo2 = $defi;
      }
  return ($defi);
}

echo my_fibo_it(0) . "\n";


// microtime() retourne le timestamp Unix, avec les microsecondes
function microtime_float()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}

echo $time_start = microtime_float() . "\n";