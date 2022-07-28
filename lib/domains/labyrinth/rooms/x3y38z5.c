inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 5 }));
  set_short( "Passage - x3y38z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y39z5.c",
  "south" : DIR+"/rooms/x3y37z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
