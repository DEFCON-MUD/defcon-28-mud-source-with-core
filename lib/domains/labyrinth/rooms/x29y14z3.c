inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 3 }));
  set_short( "Corridor - x29y14z3" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y14z3.c",
  "north" : DIR+"/rooms/x29y15z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
