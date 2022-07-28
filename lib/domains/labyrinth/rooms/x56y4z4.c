inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 4, 4 }));
  set_short( "Hallway - x56y4z4" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y4z4.c",
  "east" : DIR+"/rooms/x57y4z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
