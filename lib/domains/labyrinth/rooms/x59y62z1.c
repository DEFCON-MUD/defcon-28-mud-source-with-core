inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 1 }));
  set_short( "Corridor - x59y62z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y62z1.c",
  "east" : DIR+"/rooms/x60y62z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
