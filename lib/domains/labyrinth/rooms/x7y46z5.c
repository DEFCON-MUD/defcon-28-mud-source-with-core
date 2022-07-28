inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 5 }));
  set_short( "Corridor - x7y46z5" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y46z5.c",
  "south" : DIR+"/rooms/x7y45z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
