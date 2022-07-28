inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 1 }));
  set_short( "Corridor - x35y38z1" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y38z1.c",
  "south" : DIR+"/rooms/x35y37z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
