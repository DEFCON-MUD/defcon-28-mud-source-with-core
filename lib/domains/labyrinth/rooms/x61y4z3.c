inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 4, 3 }));
  set_short( "Hallway - x61y4z3" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y5z3.c",
  "south" : DIR+"/rooms/x61y3z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
