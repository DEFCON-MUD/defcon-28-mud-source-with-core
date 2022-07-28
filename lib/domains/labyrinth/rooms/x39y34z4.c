inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 4 }));
  set_short( "Hallway - x39y34z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y34z4.c",
  "north" : DIR+"/rooms/x39y35z4.c",
  "south" : DIR+"/rooms/x39y33z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
