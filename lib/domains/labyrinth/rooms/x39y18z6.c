inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 6 }));
  set_short( "Passage - x39y18z6" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y18z6.c",
  "north" : DIR+"/rooms/x39y19z6.c",
  "south" : DIR+"/rooms/x39y17z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
