<?php

/**
 * Page callback.
 */
function menufun_greeting($first_name = '', $last_name = '', $from_first_name = '', $from_last_name = '') {
  return t('Hello @first_name @last_name from @from_first_name @from_last_name', array('@first_name' => $first_name, '@last_name' => $last_name, '@from_first_name' =>
    $from_first_name, '@from_last_name' => $from_last_name));
}

function menufun_farewell() {
  return t('Goodbye');
}

function menufun_hello($animal) {
  return t("Hello $animal");
}

function a_zoo_animal_to_arg($arg) {
// $arg is '%' since it is a wildcard
// Let's replace it with a zoo animal.
  return 'tiger';
}

/**
 * Title callback.
 */
function menufun_title() {
  drupal_set_title(t('The page title'));
  $now = format_date(time(), 'custom', 'D d F Y h:s');
  return t('It is now @time', array('@time' => $now));
}
