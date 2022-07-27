inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 8 }));
  set_short( "Hallway - x39y30z8" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y30z8.c",
  "south" : DIR+"/rooms/x39y29z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
