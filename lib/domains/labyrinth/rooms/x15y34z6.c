inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 6 }));
  set_short( "Corridor - x15y34z6" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y34z6.c",
  "north" : DIR+"/rooms/x15y35z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
