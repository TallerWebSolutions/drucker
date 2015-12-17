<?php
//drush command to make working with a team and features alot easier

function projectup_drush_command() {
  $items = array();

  $items['projectup'] = array(
    'description' => "Updates project by pulling from the repo and running drupal updates while preventing errors from current enabled feature dependencies given that such are treated on the updates",
    'arguments' => array(
      //'filling' => 'The type of the sandwich (turkey, cheese, etc.)',
      ),
    'options' => array(
      //'spreads' => 'Comma delimited list of spreads (e.g. mayonnaise, mustard)',
      ),
    'examples' => array(
     // 'drush mmas turkey --spreads=ketchup,mustard' => 'Make a terrible-tasting sandwich that is lacking in pickles.',
      ),
    'aliases' => array('pjup'),

    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_ROOT, // No bootstrap at all.
    );

  return $items;
}


function drush_projectup() {
 drush_invoke_process("@self", "vset", $commandline_args = array("maintenance_mode", "1"), $commandline_options = array("-y"));
 drush_op_system('git pull');
 drush_invoke_process("@self", "updb", $commandline_args = array("-y"));
 drush_invoke_process("@self", "features");
 drush_invoke_process("@self", "cc", $commandline_args = array("all"));
 drush_invoke_process("@self", "vset", $commandline_args = array("maintenance_mode", "0"), $commandline_options = array("-y"));
}
