inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 1 }));
  set_short( "Passage - x19y26z1" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y26z1.c",
  "south" : DIR+"/rooms/x19y25z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
