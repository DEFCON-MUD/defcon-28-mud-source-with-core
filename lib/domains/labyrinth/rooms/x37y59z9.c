inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 59, 9 }));
  set_short( "Hallway - x37y59z9" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y60z9.c",
  "south" : DIR+"/rooms/x37y58z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
