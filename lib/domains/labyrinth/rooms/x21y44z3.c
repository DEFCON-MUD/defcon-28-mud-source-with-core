inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 3 }));
  set_short( "Corridor - x21y44z3" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y44z3.c",
  "north" : DIR+"/rooms/x21y45z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
