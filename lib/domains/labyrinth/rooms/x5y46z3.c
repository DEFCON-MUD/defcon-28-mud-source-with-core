inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 3 }));
  set_short( "Hallway - x5y46z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y46z3.c",
  "east" : DIR+"/rooms/x6y46z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
