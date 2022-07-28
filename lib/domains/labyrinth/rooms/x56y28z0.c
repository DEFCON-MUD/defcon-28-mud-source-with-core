inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 28, 0 }));
  set_short( "Corridor - x56y28z0" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y28z0.c",
  "east" : DIR+"/rooms/x57y28z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
