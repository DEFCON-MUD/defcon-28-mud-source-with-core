inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 1 }));
  set_short( "Passage - x39y43z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z1.c",
  "south" : DIR+"/rooms/x39y42z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
