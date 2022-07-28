inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 3 }));
  set_short( "Corridor - x1y24z3" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y25z3.c",
  "south" : DIR+"/rooms/x1y23z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
