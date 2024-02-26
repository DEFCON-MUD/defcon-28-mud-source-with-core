inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 12, 1 }));
  set_short( "Passage - x12y12z1" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y12z1.c",
  "east" : DIR+"/rooms/x13y12z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
