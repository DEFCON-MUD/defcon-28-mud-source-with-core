inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 60, 7 }));
  set_short( "Corridor - x21y60z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y60z7.c",
  "south" : DIR+"/rooms/x21y59z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
