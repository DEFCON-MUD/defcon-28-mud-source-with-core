inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 0, 3 }));
  set_short( "Hallway - x5y0z3" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y0z3.c",
  "east" : DIR+"/rooms/x6y0z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
