inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 40, 7 }));
  set_short( "Hallway - x8y40z7" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y40z7.c",
  "east" : DIR+"/rooms/x9y40z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
