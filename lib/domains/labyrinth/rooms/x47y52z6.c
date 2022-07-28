inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 6 }));
  set_short( "Hallway - x47y52z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y52z6.c",
  "north" : DIR+"/rooms/x47y53z6.c",
  "south" : DIR+"/rooms/x47y51z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
