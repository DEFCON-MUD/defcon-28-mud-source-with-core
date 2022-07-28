inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 14, 4 }));
  set_short( "Corridor - x47y14z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y14z4.c",
  "east" : DIR+"/rooms/x48y14z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
