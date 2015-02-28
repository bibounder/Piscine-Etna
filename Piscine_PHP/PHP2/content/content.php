#!/usr/bin/env php
<?php
// content.php for  in /home/paolin_t/PHP2/content
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Tue Oct 14 10:49:56 2014 PAOLINI Tom
// Last update Fri Oct 24 09:57:20 2014 PAOLINI Tom
//
$i = 1;
while ($argc > $i)
  {
    if (!(file_exists($argv[$i])))
      {
	echo "content.php: {$argv[$i]}: No such file or directory\n"; 
      }
    else if (is_dir($argv[$i]))
      {
	echo "content.php: {$argv[$i]}: Is a directory\n";
      }
    else if (!(is_readable($argv[$i])))
      {
	echo "content.php: {$argv[$i]}: Permission denied\n";
      }
    else if ($open = fopen($argv[$i], "r"))
      {
	echo fread($open, filesize($argv[$i]));
	fclose($open);
      }
    else
      echo "content.php: {$argv[$i]}: Cannot open file\n";
    $i++;
  }