inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 7 }));
  set_short( "Hallway - x55y41z7" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z7.c",
  "south" : DIR+"/rooms/x55y40z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
