inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 2 }));
  set_short( "Corridor - x25y36z2" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y36z2.c",
  "south" : DIR+"/rooms/x25y35z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
