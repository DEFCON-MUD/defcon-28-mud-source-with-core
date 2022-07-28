inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 2 }));
  set_short( "Hallway - x41y44z2" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y44z2.c",
  "east" : DIR+"/rooms/x42y44z2.c",
  "north" : DIR+"/rooms/x41y45z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
