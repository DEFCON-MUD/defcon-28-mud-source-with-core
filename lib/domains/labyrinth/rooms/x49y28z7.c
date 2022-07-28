inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 7 }));
  set_short( "Passage - x49y28z7" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y28z7.c",
  "south" : DIR+"/rooms/x49y27z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
