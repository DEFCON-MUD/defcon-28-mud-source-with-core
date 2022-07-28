inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 25, 4 }));
  set_short( "Passage - x57y25z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y26z4.c",
  "south" : DIR+"/rooms/x57y24z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
