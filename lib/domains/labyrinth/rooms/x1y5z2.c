inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 2 }));
  set_short( "Corridor - x1y5z2" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z2.c",
  "south" : DIR+"/rooms/x1y4z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
