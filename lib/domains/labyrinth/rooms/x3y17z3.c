inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 17, 3 }));
  set_short( "Corridor - x3y17z3" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y18z3.c",
  "south" : DIR+"/rooms/x3y16z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
