inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 53, 2 }));
  set_short( "Passage - x51y53z2" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y54z2.c",
  "south" : DIR+"/rooms/x51y52z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
