inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 39, 3 }));
  set_short( "Corridor - x9y39z3" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y40z3.c",
  "south" : DIR+"/rooms/x9y38z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
