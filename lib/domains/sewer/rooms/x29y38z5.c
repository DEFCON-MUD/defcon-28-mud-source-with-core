inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 38, 5 }));
  set_short( "Corridor - x29y38z5" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y38z5.c",
  "south" : DIR+"/rooms/x29y37z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
