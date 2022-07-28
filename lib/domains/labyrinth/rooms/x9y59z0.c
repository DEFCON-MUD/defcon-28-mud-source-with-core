inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 59, 0 }));
  set_short( "Hallway - x9y59z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y60z0.c",
  "south" : DIR+"/rooms/x9y58z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
