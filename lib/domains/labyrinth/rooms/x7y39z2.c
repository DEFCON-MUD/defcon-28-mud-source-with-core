inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 39, 2 }));
  set_short( "Passage - x7y39z2" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y40z2.c",
  "south" : DIR+"/rooms/x7y38z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
