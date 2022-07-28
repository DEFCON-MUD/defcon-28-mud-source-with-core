inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 3 }));
  set_short( "Hallway - x5y40z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y40z3.c",
  "north" : DIR+"/rooms/x5y41z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
