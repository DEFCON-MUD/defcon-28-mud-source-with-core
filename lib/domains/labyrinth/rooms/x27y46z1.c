inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 1 }));
  set_short( "Corridor - x27y46z1" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y46z1.c",
  "north" : DIR+"/rooms/x27y47z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
