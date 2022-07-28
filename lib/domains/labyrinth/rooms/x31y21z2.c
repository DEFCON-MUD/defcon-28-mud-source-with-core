inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 2 }));
  set_short( "Corridor - x31y21z2" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z2.c",
  "south" : DIR+"/rooms/x31y20z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
