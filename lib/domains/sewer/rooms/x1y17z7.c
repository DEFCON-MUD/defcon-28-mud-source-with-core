inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 7 }));
  set_short( "Passage - x1y17z7" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z7.c",
  "south" : DIR+"/rooms/x1y16z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
