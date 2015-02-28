<?php
// dichotomique.php for  in /home/paolin_t/Algo3/defi11
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Wed Oct 22 11:04:43 2014 PAOLINI Tom
// Last update Wed Oct 22 18:13:47 2014 PAOLINI Tom
//
function	recherche_dicho($tab, $find)
{
  static $deb = 0;
  static $flag = true;
  static $fin;
  if ($flag)
    {
      $fin = count($tab) -1;
      $flag = false;
    }
  if($deb <= $fin)
    {
      $milieu = (int)(($deb+$fin)/2);
      if($tab[$milieu] == $find)
	{
	  echo ($milieu). "\n";
        }
      else if($tab[$milieu] > $find)
    	{
	  $fin = $milieu - 1;	
	  return recherche_dicho($tab, $find);
    	}	
      else if($tab[$milieu] < $find)
    	{
	  $deb = $milieu + 1;
	  return recherche_dicho($tab, $find);
	}
    }
  else
    return false;
}
