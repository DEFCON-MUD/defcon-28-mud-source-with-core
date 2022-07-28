inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 7, 3 }));
  set_short( "Hallway - x3y7z3" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y8z3.c",
  "south" : DIR+"/rooms/x3y6z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
