inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 30, 0 }));
  set_short( "Passage - x59y30z0" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y31z0.c",
  "south" : DIR+"/rooms/x59y29z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
