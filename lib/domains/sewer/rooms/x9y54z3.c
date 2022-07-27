inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 3 }));
  set_short( "Corridor - x9y54z3" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y54z3.c",
  "south" : DIR+"/rooms/x9y53z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
