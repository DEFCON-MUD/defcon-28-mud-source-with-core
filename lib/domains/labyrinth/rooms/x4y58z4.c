inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 58, 4 }));
  set_short( "Passage - x4y58z4" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y58z4.c",
  "east" : DIR+"/rooms/x5y58z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
