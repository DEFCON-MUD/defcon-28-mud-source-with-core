inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 8, 3 }));
  set_short( "Passage - x17y8z3" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y8z3.c",
  "south" : DIR+"/rooms/x17y7z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
