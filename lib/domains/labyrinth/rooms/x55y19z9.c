inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 19, 9 }));
  set_short( "Corridor - x55y19z9" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y20z9.c",
  "south" : DIR+"/rooms/x55y18z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
