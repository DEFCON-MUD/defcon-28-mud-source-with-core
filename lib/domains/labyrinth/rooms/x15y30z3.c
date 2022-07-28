inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 30, 3 }));
  set_short( "Corridor - x15y30z3" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y30z3.c",
  "north" : DIR+"/rooms/x15y31z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
