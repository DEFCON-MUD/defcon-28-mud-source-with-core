inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 35, 6 }));
  set_short( "Hallway - x31y35z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y36z6.c",
  "south" : DIR+"/rooms/x31y34z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
