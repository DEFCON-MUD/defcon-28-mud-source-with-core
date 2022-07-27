inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 15, 8 }));
  set_short( "Corridor - x59y15z8" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y16z8.c",
  "south" : DIR+"/rooms/x59y14z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
