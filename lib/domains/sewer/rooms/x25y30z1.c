inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 1 }));
  set_short( "Passage - x25y30z1" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y30z1.c",
  "east" : DIR+"/rooms/x26y30z1.c",
  "north" : DIR+"/rooms/x25y31z1.c",
  "south" : DIR+"/rooms/x25y29z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
