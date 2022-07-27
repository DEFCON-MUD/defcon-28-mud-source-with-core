inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 29, 5 }));
  set_short( "Passage - x33y29z5" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y30z5.c",
  "south" : DIR+"/rooms/x33y28z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
