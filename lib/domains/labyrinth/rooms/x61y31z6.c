inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 6 }));
  set_short( "Hallway - x61y31z6" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z6.c",
  "south" : DIR+"/rooms/x61y30z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
