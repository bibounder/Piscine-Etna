#!/usr/bin/env php
<?php
// palindrome.php for  in /home/paolin_t/PHP1/palindrome
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 13 11:15:10 2014 PAOLINI Tom
// Last update Mon Oct 13 17:27:48 2014 PAOLINI Tom
//
function palindrome($param)
{
  for ($c = 0; isset($param[$c]); $c++);
  for ($o = --$c, $z = 0; $z < $c / 2; $o--, $z++)
    {
      while (!($param[$o] >= 'a' && $param[$o] <= 'z' || $param[$o] >= 'A' && $param[$o] <= 'Z'))
	$o--;
      while (!($param[$z] >= 'a' && $param[$z] <= 'z' || $param[$z] >= 'A' && $param[$z] <= 'Z'))
	$z++;
      $fin = ord($param[$o]);
      $ascii = ord($param[$z]);
      if ($param[$z] < 'a')
	$ascii = ord($param[$z]) +32;
      if ($param[$o] < 'a')
	$fin = ord($param[$o]) +32;
      if ($ascii != $fin)
	{
	  echo "False\n";
	  return;
	}
    }
  echo "True\n";
}