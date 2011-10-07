
Dezi search
-----------

This module provides an implementation of the Search API which uses a Dezi
search server for indexing and searching. Before enabling or using this
module, you'll have to follow the instructions given in INSTALL.txt first.

Regarding third-party features, the following are supported:

- search_api_autocomplete
  Introduced by module: search_api_autocomplete
  Lets you add autocompletion capabilities to search forms on the site.
- search_api_facets
  Introduced by module: search_api_facets
  Allows you to create facetted searches for dynamically filtering search
  results.
- search_api_mlt
  Introduced by module: search_api_views
  Lets you display items that are similar to a given one. Use, e.g., to create
  a "More like this" block for node pages.
- search_api_multi
  Introduced by module: search_api_multi
  Allows you to search multiple indexes at once, as long as they are on the same
  server. You can use this to let users simultaneously search all content on the
  site – nodes, comments, user profiles, etc.
- search_api_spellcheck
  Introduced by module: search_api_spellcheck
  Gives the option to display automatic spellchecking for searches.

If you feel some service option is missing, or have other ideas for improving
this implementation, please file a feature request in the project's issue queue,
at [3], using the "Dezi search" component.

[3] http://drupal.org/project/issues/search_api

Specifics
---------

Please consider that, since Dezi handles tokenizing, stemming and other
preprocessing tasks, activating any preprocessors in a search index' settings is
usually not needed or even cumbersome. If you are adding an index to a Dezi
server you should therefore then disable all processors which handle such
classic preprocessing tasks.

Also, due to the way Dezi works, using a single field for fulltext searching
will result in the smallest index size and best search performance, as well as
possibly having other advantages, too. Therefore, if you don't need to search
different sets of fields in different searches on an index, it is adviced that
you simply set all fields that should be searched to type "Fulltext" (but don't
check "Indexed"), add the "Fulltext field" data alter callback and only index
the newly added field named "Fulltext".

Developers
----------

The SearchApiDeziService class has a few custom extensions, documented with its
code. Methods of note are:
- deleteItems()
- ping()

Credits
-------------

The Dezi module is based heavily on the Solr search module.

