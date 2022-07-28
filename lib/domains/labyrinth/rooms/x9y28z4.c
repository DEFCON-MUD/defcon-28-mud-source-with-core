inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 4 }));
  set_short( "Corridor - x9y28z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y28z4.c",
  "east" : DIR+"/rooms/x10y28z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
