inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 55, 3 }));
  set_short( "Corridor - x43y55z3" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y56z3.c",
  "south" : DIR+"/rooms/x43y54z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
