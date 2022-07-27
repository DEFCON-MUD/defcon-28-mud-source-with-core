inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 0 }));
  set_short( "Passage - x35y53z0" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z0.c",
  "south" : DIR+"/rooms/x35y52z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
