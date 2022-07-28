inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 5, 4 }));
  set_short( "Hallway - x27y5z4" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y6z4.c",
  "south" : DIR+"/rooms/x27y4z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
