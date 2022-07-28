inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 60, 4 }));
  set_short( "Corridor - x52y60z4" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y60z4.c",
  "east" : DIR+"/rooms/x53y60z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
