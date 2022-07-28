inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 7, 0 }));
  set_short( "Corridor - x7y7z0" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y8z0.c",
  "south" : DIR+"/rooms/x7y6z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
