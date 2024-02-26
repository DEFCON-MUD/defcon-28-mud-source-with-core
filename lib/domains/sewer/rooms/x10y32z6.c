inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 32, 6 }));
  set_short( "Passage - x10y32z6" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y32z6.c",
  "east" : DIR+"/rooms/x11y32z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
