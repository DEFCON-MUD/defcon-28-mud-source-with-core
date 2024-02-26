inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 53, 2 }));
  set_short( "Corridor - x49y53z2" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y54z2.c",
  "south" : DIR+"/rooms/x49y52z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
