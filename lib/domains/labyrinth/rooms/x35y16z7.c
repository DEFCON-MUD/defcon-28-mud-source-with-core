inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 7 }));
  set_short( "Hallway - x35y16z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y17z7.c",
  "south" : DIR+"/rooms/x35y15z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
