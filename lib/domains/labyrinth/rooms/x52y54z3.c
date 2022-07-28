inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 54, 3 }));
  set_short( "Corridor - x52y54z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y54z3.c",
  "east" : DIR+"/rooms/x53y54z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
