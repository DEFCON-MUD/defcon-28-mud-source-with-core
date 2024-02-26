inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 64, 1 }));
  set_short( "Corridor - x57y64z1" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y64z1.c",
  "east" : DIR+"/rooms/x58y64z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
