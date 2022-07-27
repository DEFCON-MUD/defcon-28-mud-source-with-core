inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 1 }));
  set_short( "Corridor - x39y34z1" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y34z1.c",
  "south" : DIR+"/rooms/x39y33z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
