inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 4 }));
  set_short( "Corridor - x55y30z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y30z4.c",
  "north" : DIR+"/rooms/x55y31z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
