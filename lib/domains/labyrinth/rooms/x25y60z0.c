inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 60, 0 }));
  set_short( "Corridor - x25y60z0" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y60z0.c",
  "north" : DIR+"/rooms/x25y61z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
