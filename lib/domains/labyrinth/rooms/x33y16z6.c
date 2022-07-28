inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 16, 6 }));
  set_short( "Passage - x33y16z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y17z6.c",
  "south" : DIR+"/rooms/x33y15z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
