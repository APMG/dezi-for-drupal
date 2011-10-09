<?php

/**
 * A subclass of Dezi_Client.
 *
 */
class SearchApiDeziConnection extends Dezi_Client {

  /**
   * Authentication string (username + password) for HTTP authentication.
   */
  protected $http_auth;

  /**
   * Get metadata about fields in the Dezi index.
   *
   * @return array
   *   An array of objects, keyed by field name, describing fields on the index.
   *
   */
  public function getFields() {
    $fields = array();
    // TODO if Lucy ever supports field types, Dezi will too
    foreach ($this->fields as $f) {
        $fields[$f] = 'textfield';
    }
    return $fields;
  }

}
