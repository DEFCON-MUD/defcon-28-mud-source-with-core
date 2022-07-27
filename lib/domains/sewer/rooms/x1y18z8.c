inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 8 }));
  set_short( "Corridor - x1y18z8" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y19z8.c",
  "south" : DIR+"/rooms/x1y17z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
