inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 0 }));
  set_short( "Hallway - x7y8z0" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y8z0.c",
  "south" : DIR+"/rooms/x7y7z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
