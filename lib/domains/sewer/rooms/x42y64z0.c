inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 0 }));
  set_short( "Passage - x42y64z0" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z0.c",
  "east" : DIR+"/rooms/x43y64z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
