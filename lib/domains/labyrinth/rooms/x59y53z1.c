inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 53, 1 }));
  set_short( "Hallway - x59y53z1" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y54z1.c",
  "south" : DIR+"/rooms/x59y52z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
