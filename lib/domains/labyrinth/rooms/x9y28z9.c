inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 9 }));
  set_short( "Corridor - x9y28z9" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y28z9.c",
  "south" : DIR+"/rooms/x9y27z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
