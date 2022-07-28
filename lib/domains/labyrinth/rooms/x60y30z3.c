inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 30, 3 }));
  set_short( "Corridor - x60y30z3" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y30z3.c",
  "east" : DIR+"/rooms/x61y30z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
