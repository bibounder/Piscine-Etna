#!/usr/bin/env php
<?php
// capitalize_file.php for  in /home/paolin_t/PHP3/capitalize_file
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Wed Oct 15 09:23:08 2014 PAOLINI Tom
// Last update Wed Oct 15 19:54:47 2014 PAOLINI Tom
//
$a = 1;
$prems = 0;
if (!(file_exists($argv[$a])))
  {
    echo "capitalize_file: {$argv[$a]}: No such file or directory\n";
  }
else if (is_dir($argv[$a]))
  {
    echo "capitalize_file: {$argv[$a]}: Is a directory\n";
  }
else if (!(is_readable($argv[$a])) || (!(is_writable($argv[$a]))))
  {
    echo "capitalize_file: {$argv[$a]}: Permission denied\n";
  }
else if ($open = fopen($argv[$a], "r"))
  {
    if (filesize($argv[$a]) == 0)
    {
      fclose($open);
      return (0);
    }
    $ct = fread($open, filesize($argv[$a]));
    fclose($open);
    $open = fopen($argv[$a], "w");
    for ($i = 1; isset($ct[$i]); $i++)
      {
	if ( $ct[$i - 1] >= "A" && $ct[$i - 1] <= "Z" && $prems == 0)
	  $prems = 1;
	if ( $ct[$i - 1] >= "a" && $ct[$i - 1] <= "z" && $prems == 0)
	      {
		$maj = ord($ct[$i - 1]);
		$maj = $maj - 32;
		$ct[$i - 1] = chr($maj);
		$prems = 1;
	      }
	if (($ct[$i - 1] == "." || $ct[$i - 1] == "!") && ($ct[$i] == " " || $ct[$i] == chr(9) || $ct[$i] == "\n") && $ct[$i + 1] >= "a" &&  $ct[$i + 1] <= "z")
	  { 
	    $maj = ord($ct[$i + 1]);
	    $maj = $maj - 32;
	    $ct[$i + 1] = chr($maj);
	      }
      }
    fwrite($open, $ct);
    fclose($open);
  }
else
  echo "capitalize_file: {$argv[$a]}: Cannot open file\n";