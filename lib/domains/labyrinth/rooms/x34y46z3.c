inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 46, 3 }));
  set_short( "Hallway - x34y46z3" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y46z3.c",
  "east" : DIR+"/rooms/x35y46z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
