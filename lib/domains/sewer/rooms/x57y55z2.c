inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 55, 2 }));
  set_short( "Hallway - x57y55z2" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y56z2.c",
  "south" : DIR+"/rooms/x57y54z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
