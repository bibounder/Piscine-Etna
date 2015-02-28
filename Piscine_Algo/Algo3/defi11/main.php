#!/usr/bin/env php
<?php
// main.php for  in /home/paolin_t/Algo3/defi11
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Wed Oct 22 18:13:36 2014 PAOLINI Tom
// Last update Wed Oct 22 18:13:38 2014 PAOLINI Tom
//

include "dichotomique.php";

$lost = [4, 8, 15, 16, 23, 42, 316, 400, 815, 2004, 2010, 2011, 5000];
echo recherche_dicho($lost, 5000);