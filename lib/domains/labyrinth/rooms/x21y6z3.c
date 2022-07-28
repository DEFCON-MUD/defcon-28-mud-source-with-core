inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 3 }));
  set_short( "Hallway - x21y6z3" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y7z3.c",
  "south" : DIR+"/rooms/x21y5z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
