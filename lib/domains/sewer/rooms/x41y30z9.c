inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 30, 9 }));
  set_short( "Hallway - x41y30z9" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y30z9.c",
  "south" : DIR+"/rooms/x41y29z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
