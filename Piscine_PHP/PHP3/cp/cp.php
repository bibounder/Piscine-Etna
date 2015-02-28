#!/usr/bin/env php
<?php
// cp.php for  in /home/paolin_t/PHP3/cp
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Wed Oct 15 17:24:06 2014 PAOLINI Tom
// Last update Thu Oct 16 15:48:20 2014 PAOLINI Tom
//
$a = 1;
if (!(file_exists($argv[$a])))
  {
    echo "cp: {$argv[$a]}: No such file or directory\n";
  }
else if (is_dir($argv[$a]))
  {
    echo "cp: {$argv[$a]}: Is a directory\n";
  }
else if (!(is_dir($argv[$a + 1])))
  {
    echo "cp: {$argv[$a + 1]}: Not a directory\n";
  }
else if (!(is_readable($argv[$a])) || (!(is_writable($argv[$a]))))
  {
    echo "capitalize_file: {$argv[$a]}: Permission denied\n";
  }
else if ($open = fopen($argv[$a], "r"))
  {
    $cp = fread($open, filesize($argv[$a]));
    fclose($open);
    $open = fopen($argv[$a], "w");







else
  echo "capitalize_file: {$argv[$a]}: Cannot open file\n";


