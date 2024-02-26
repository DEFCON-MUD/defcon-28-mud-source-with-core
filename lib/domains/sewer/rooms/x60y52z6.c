inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 52, 6 }));
  set_short( "Passage - x60y52z6" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y52z6.c",
  "east" : DIR+"/rooms/x61y52z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
