inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 6 }));
  set_short( "Passage - x55y9z6" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z6.c",
  "south" : DIR+"/rooms/x55y8z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
