inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 32, 1 }));
  set_short( "Passage - x40y32z1" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y32z1.c",
  "east" : DIR+"/rooms/x41y32z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
