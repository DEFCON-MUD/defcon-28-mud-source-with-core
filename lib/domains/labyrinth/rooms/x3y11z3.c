inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 3 }));
  set_short( "Hallway - x3y11z3" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z3.c",
  "south" : DIR+"/rooms/x3y10z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
