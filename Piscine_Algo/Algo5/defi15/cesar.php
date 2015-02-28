#!/usr/bin/env php
<?php
// chiffrement.php for  in /home/paolin_t/Algo5/defi15
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Fri Oct 24 09:20:12 2014 PAOLINI Tom
// Last update Sat Oct 25 09:47:20 2014 PAOLINI Tom
//
function charok($caractere)
{
  if( $caractere >= 'a' && $caractere <= 'z')
    {
      $state = 1;
    }
  else if ( $caractere>= 'A' && $caractere <= 'Z')
    {
      $state = 2;
    }
  else
    return false;
  return $state;
}

function chiffrement_cesar($fichiertxt, $clef)
{
  $filer = fopen($fichiertxt, 'r');
  $filew = fopen($fichiertxt, 'c');

  while ($c = fread($filer, 1))
    {
      if (charok($c) == 1)
	{
	  $n = ord($c) - ord('a') +$clef;
	  $r = $n % 26;
	  if ($r < 0)
	    $r += 26;
	  $c = chr($r + ord('a'));
	}
      else if (charok($c) == 2)
	{
	  $n = ord($c) - ord('A') +$clef;
          $r = $n % 26;
          if ($r < 0)
            $r += 26;
          $c = chr($r + ord('A'));
	}
      fwrite($filew, $c);
    }
  fclose($filer);
  fclose($filew);
}

function dechiffrement_cesar($fichiertxt, $clef)
{
  chiffrement_cesar($fichiertxt, -$clef);
}