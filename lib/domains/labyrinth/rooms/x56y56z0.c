inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 56, 0 }));
  set_short( "Passage - x56y56z0" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y56z0.c",
  "east" : DIR+"/rooms/x57y56z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
