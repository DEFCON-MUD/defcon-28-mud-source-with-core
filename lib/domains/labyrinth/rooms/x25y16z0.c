inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 0 }));
  set_short( "Hallway - x25y16z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y17z0.c",
  "south" : DIR+"/rooms/x25y15z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
