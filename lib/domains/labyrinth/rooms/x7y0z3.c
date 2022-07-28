inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 3 }));
  set_short( "Hallway - x7y0z3" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z3.c",
  "east" : DIR+"/rooms/x8y0z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
