inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 57, 7 }));
  set_short( "Passage - x15y57z7" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y58z7.c",
  "south" : DIR+"/rooms/x15y56z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
