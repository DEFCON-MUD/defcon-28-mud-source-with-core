inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 54, 3 }));
  set_short( "Corridor - x2y54z3" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y54z3.c",
  "east" : DIR+"/rooms/x3y54z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
