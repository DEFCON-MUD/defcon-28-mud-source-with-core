inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 2 }));
  set_short( "Corridor - x37y10z2" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y10z2.c",
  "east" : DIR+"/rooms/x38y10z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
