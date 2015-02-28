#!/usr/bin/env php
<?php
// my_pathinfo.php for  in /home/paolin_t/PHP4/my_pathinfo
// 
// Made by PAOLINI Tom
// Login   <paolin_t@etna-alternance.net>
// 
// Started on  Thu Oct 16 09:42:25 2014 PAOLINI Tom
// Last update Thu Oct 16 10:56:40 2014 PAOLINI Tom
//
function my_pathinfo($filepath) 
{
	$ret = array();
    preg_match('%^(.*?)[\\\\/]*(([^/\\\\]*?)(\.([^\.\\\\/]+?)|))[\\\\/\.]*$%im',$filepath,$m);
    if($m[1]) $ret['dirname']=$m[1];
    if($m[2]) $ret['basename']=$m[2];
    if($m[3]) $ret['extension']=$m[3];
    if($m[4]) $ret['filename']=$m[4];
    return $ret;
}


print_r(my_pathinfo("/tmp/test.txt"));
print_r(my_pathinfo("."));
print_r(my_pathinfo("/var/www/mon_site/"));
