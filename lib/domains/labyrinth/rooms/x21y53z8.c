inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 53, 8 }));
  set_short( "Passage - x21y53z8" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y54z8.c",
  "south" : DIR+"/rooms/x21y52z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
