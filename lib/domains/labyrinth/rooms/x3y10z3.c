inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 10, 3 }));
  set_short( "Corridor - x3y10z3" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y10z3.c",
  "north" : DIR+"/rooms/x3y11z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
