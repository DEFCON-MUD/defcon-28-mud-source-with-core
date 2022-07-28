inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 55, 5 }));
  set_short( "Hallway - x35y55z5" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y56z5.c",
  "south" : DIR+"/rooms/x35y54z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
