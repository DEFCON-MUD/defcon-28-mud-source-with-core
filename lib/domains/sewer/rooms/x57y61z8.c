inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 61, 8 }));
  set_short( "Hallway - x57y61z8" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y62z8.c",
  "south" : DIR+"/rooms/x57y60z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
