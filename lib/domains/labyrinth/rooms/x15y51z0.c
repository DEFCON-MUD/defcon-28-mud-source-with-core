inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 51, 0 }));
  set_short( "Corridor - x15y51z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y52z0.c",
  "south" : DIR+"/rooms/x15y50z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
