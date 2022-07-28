inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 6 }));
  set_short( "Corridor - x11y4z6" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z6.c",
  "north" : DIR+"/rooms/x11y5z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
