inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 1 }));
  set_short( "Hallway - x45y10z1" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y10z1.c",
  "north" : DIR+"/rooms/x45y11z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
