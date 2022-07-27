inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 17, 2 }));
  set_short( "Corridor - x49y17z2" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y18z2.c",
  "south" : DIR+"/rooms/x49y16z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
