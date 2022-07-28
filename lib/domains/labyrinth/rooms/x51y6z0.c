inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 0 }));
  set_short( "Corridor - x51y6z0" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y6z0.c",
  "north" : DIR+"/rooms/x51y7z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
