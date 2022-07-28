inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 7 }));
  set_short( "Hallway - x25y54z7" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y55z7.c",
  "south" : DIR+"/rooms/x25y53z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
