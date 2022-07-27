inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 13, 5 }));
  set_short( "Hallway - x9y13z5" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y14z5.c",
  "south" : DIR+"/rooms/x9y12z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
