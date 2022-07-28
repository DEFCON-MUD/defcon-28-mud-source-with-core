inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 53, 7 }));
  set_short( "Passage - x17y53z7" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y54z7.c",
  "south" : DIR+"/rooms/x17y52z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
