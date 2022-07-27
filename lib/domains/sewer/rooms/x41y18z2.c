inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 18, 2 }));
  set_short( "Hallway - x41y18z2" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y18z2.c",
  "north" : DIR+"/rooms/x41y19z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
