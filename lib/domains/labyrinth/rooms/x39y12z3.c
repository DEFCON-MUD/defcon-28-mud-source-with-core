inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 3 }));
  set_short( "Hallway - x39y12z3" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y12z3.c",
  "south" : DIR+"/rooms/x39y11z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
