inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 17, 1 }));
  set_short( "Hallway - x27y17z1" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y18z1.c",
  "south" : DIR+"/rooms/x27y16z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
