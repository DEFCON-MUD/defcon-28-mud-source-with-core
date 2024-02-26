inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 38, 5 }));
  set_short( "Hallway - x38y38z5" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y38z5.c",
  "east" : DIR+"/rooms/x39y38z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
