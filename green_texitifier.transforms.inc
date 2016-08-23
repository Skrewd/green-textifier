<?php

/**
 * Adds prefixes to all lines of a body of text.
 *
 * @param string $body
 *   The body of text.
 * @param string $prefix
 *   (Optional) The prefix to prepend to all lines within the body.
 *
 * @return string
 *   A body of text with each line prefixed.
 */
function lines_prepend($body, $prefix = '> ') {

  $lines = array_map(function ($line) use ($prefix) {
    return $prefix . $line;
  }, explode("\n", $body));

  return implode("\n", $lines);

}
