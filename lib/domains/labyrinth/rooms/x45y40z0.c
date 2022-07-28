inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 0 }));
  set_short( "Corridor - x45y40z0" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y41z0.c",
  "south" : DIR+"/rooms/x45y39z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
