inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 5 }));
  set_short( "Corridor - x1y30z5" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y30z5.c",
  "north" : DIR+"/rooms/x1y31z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
