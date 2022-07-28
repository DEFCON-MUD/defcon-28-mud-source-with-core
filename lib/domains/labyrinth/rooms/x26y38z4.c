inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 4 }));
  set_short( "Corridor - x26y38z4" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z4.c",
  "east" : DIR+"/rooms/x27y38z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
