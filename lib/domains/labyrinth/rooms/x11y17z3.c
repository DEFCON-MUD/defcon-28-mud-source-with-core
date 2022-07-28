inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 3 }));
  set_short( "Hallway - x11y17z3" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z3.c",
  "south" : DIR+"/rooms/x11y16z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
