inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 5 }));
  set_short( "Corridor - x35y38z5" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y38z5.c",
  "north" : DIR+"/rooms/x35y39z5.c",
  "south" : DIR+"/rooms/x35y37z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
