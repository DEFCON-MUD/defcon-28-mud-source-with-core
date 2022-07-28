inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 3, 9 }));
  set_short( "Hallway - x23y3z9" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y4z9.c",
  "south" : DIR+"/rooms/x23y2z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
