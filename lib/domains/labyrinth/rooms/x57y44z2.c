inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 2 }));
  set_short( "Hallway - x57y44z2" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y44z2.c",
  "east" : DIR+"/rooms/x58y44z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
