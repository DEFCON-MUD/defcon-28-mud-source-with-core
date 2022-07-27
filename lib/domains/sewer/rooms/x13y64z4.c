inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 4 }));
  set_short( "Hallway - x13y64z4" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z4.c",
  "east" : DIR+"/rooms/x14y64z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
