inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 5 }));
  set_short( "Passage - x53y56z5" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y56z5.c",
  "south" : DIR+"/rooms/x53y55z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
