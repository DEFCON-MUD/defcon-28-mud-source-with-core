inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 7 }));
  set_short( "Hallway - x39y50z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y50z7.c",
  "north" : DIR+"/rooms/x39y51z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
