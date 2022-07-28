inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 25, 3 }));
  set_short( "Hallway - x15y25z3" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y26z3.c",
  "south" : DIR+"/rooms/x15y24z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
