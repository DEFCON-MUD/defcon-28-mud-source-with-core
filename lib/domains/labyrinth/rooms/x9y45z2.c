inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 45, 2 }));
  set_short( "Corridor - x9y45z2" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y46z2.c",
  "south" : DIR+"/rooms/x9y44z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
