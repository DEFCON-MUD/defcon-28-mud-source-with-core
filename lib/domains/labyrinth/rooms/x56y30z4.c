inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 30, 4 }));
  set_short( "Corridor - x56y30z4" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y30z4.c",
  "east" : DIR+"/rooms/x57y30z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
