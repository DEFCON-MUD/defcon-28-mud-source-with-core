inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 9 }));
  set_short( "Corridor - x40y0z9" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z9.c",
  "east" : DIR+"/rooms/x41y0z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
