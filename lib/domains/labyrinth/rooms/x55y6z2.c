inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 2 }));
  set_short( "Hallway - x55y6z2" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z2.c",
  "north" : DIR+"/rooms/x55y7z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
