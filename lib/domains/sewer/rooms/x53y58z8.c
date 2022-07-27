inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 58, 8 }));
  set_short( "Corridor - x53y58z8" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y58z8.c",
  "south" : DIR+"/rooms/x53y57z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
