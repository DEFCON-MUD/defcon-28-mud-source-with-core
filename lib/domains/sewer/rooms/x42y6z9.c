inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 9 }));
  set_short( "Passage - x42y6z9" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z9.c",
  "east" : DIR+"/rooms/x43y6z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
