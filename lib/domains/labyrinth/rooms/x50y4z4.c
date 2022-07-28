inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 4, 4 }));
  set_short( "Hallway - x50y4z4" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y4z4.c",
  "east" : DIR+"/rooms/x51y4z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
