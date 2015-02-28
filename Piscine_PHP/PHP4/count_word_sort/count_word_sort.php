#!/usr/bin/env php
<?php
// count_word_sort.php for  in /home/paolin_t/PHP4/count_word_sort
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Thu Oct 16 13:21:48 2014 PAOLINI Tom
// Last update Thu Oct 16 13:21:51 2014 PAOLINI Tom
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
else if (!(is_readable($argv[$a])))
  {
    echo "capitalize_file: {$argv[$a]}: Permission denied\n";
  }





  else
  echo "capitalize_file: {$argv[$a]}: Cannot open file\n";
