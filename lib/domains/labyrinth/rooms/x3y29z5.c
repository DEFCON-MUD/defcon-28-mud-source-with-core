inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 29, 5 }));
  set_short( "Hallway - x3y29z5" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y30z5.c",
  "south" : DIR+"/rooms/x3y28z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
