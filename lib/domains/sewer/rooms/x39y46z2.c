inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 2 }));
  set_short( "Passage - x39y46z2" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "south" : DIR+"/rooms/x39y45z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
