#!/usr/bin/env php
<?php
// redirection.php for  in /home/paolin_t/PHP2/redirection
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Tue Oct 14 17:40:24 2014 PAOLINI Tom
// Last update Tue Oct 14 18:52:01 2014 PAOLINI Tom
//
if ($argc < 4 || $argv[$argc - 2] != ">>" && $argv[$argc - 2] != ">")
  {
    echo "Usage: ./redirection 'string' '[> >>]' 'File'\n";
      }
else if (is_dir($argv[$argc - 1]))
  {
    echo "redirection.php: {$argv[$argc -1]}: Is a directory\n";
  }
else if (is_file($argv[$argc - 1]) && !(is_writable($argv[$argc - 1])))
  {
    echo "redirection.php: {$argv[$argc -1]}: Permission denied\n";
  }
else if ($argv[$argc - 2] == ">>")
  {
    $open = fopen($argv[$argc - 1], "a");
    fwrite($open, $argv[1]);
    fclose($open);
  }
else if ($argv[$argc - 2] == ">")
  {
    $open = fopen($argv[$argc - 1], "w");
    fwrite($open, $argv[1]);
    fclose($open);
  }
else
  echo "redirection.php: {$argv[$argc -1]}: Cannot open file\n";