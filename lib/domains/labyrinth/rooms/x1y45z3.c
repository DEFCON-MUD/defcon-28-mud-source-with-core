inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 45, 3 }));
  set_short( "Passage - x1y45z3" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y46z3.c",
  "south" : DIR+"/rooms/x1y44z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
