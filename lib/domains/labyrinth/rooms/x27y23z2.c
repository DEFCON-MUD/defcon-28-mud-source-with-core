inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 23, 2 }));
  set_short( "Hallway - x27y23z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y24z2.c",
  "south" : DIR+"/rooms/x27y22z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
