inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 8, 7 }));
  set_short( "Hallway - x40y8z7" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y8z7.c",
  "east" : DIR+"/rooms/x41y8z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
