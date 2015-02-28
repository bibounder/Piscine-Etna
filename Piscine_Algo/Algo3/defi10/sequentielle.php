#!/usr/bin/env php
<?php
// sequentielle.php for  in /home/paolin_t/Algo3/defi10
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Wed Oct 22 09:14:42 2014 PAOLINI Tom
// Last update Wed Oct 22 10:43:06 2014 PAOLINI Tom
//
function	recherche_seq($tab, $find)
{
  for ($i = 0; $i < count($tab); $i++)
    {
      if ($tab[$i] == $find)
	echo $i."\n";
    }
}