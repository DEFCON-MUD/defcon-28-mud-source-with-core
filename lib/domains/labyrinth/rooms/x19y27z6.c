inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 27, 6 }));
  set_short( "Hallway - x19y27z6" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y28z6.c",
  "south" : DIR+"/rooms/x19y26z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
