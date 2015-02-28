#!/usr/bin/env php
<?php
// hello.php for  in /home/paolin_t/PHP1/hello
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Mon Oct 13 09:37:11 2014 PAOLINI Tom
// Last update Fri Oct 24 16:46:58 2014 PAOLINI Tom
//
function hello($param = "")
{
  if ($param == "")
    {
      echo "Hello world !\n";
    }
  else
    {
      echo "Hello $param !\n";
    }
}

hello();