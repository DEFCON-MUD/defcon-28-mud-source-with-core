inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 35, 5 }));
  set_short( "Corridor - x1y35z5" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y36z5.c",
  "south" : DIR+"/rooms/x1y34z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
