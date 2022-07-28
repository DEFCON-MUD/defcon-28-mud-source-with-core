inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 54, 3 }));
  set_short( "Hallway - x61y54z3" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y54z3.c",
  "north" : DIR+"/rooms/x61y55z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
