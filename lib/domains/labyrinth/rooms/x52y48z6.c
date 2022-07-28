inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 48, 6 }));
  set_short( "Passage - x52y48z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y48z6.c",
  "east" : DIR+"/rooms/x53y48z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
