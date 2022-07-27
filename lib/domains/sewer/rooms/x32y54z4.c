inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 54, 4 }));
  set_short( "Passage - x32y54z4" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y54z4.c",
  "east" : DIR+"/rooms/x33y54z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
