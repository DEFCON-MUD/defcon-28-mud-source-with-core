inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 2 }));
  set_short( "Corridor - x58y30z2" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z2.c",
  "east" : DIR+"/rooms/x59y30z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
