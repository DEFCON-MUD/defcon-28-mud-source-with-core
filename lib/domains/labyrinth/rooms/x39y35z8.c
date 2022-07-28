inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 35, 8 }));
  set_short( "Corridor - x39y35z8" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y36z8.c",
  "south" : DIR+"/rooms/x39y34z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
