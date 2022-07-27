inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 38, 7 }));
  set_short( "Passage - x59y38z7" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y38z7.c",
  "north" : DIR+"/rooms/x59y39z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
