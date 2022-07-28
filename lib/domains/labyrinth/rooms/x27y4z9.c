inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 9 }));
  set_short( "Hallway - x27y4z9" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y4z9.c",
  "south" : DIR+"/rooms/x27y3z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
