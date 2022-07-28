inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 46, 3 }));
  set_short( "Hallway - x16y46z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y46z3.c",
  "east" : DIR+"/rooms/x17y46z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
