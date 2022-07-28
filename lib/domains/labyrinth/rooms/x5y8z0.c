inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 8, 0 }));
  set_short( "Corridor - x5y8z0" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y8z0.c",
  "south" : DIR+"/rooms/x5y7z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
