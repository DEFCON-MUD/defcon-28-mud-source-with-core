inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 8 }));
  set_short( "Hallway - x39y43z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z8.c",
  "south" : DIR+"/rooms/x39y42z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
