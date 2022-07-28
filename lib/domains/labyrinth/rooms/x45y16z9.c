inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 9 }));
  set_short( "Passage - x45y16z9" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y16z9.c",
  "east" : DIR+"/rooms/x46y16z9.c",
  "south" : DIR+"/rooms/x45y15z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
