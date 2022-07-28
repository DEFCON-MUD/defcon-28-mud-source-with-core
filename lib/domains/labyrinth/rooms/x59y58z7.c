inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 7 }));
  set_short( "Passage - x59y58z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y58z7.c",
  "east" : DIR+"/rooms/x60y58z7.c",
  "south" : DIR+"/rooms/x59y57z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
