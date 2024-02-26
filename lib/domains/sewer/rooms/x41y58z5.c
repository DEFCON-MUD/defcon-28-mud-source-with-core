inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 5 }));
  set_short( "Passage - x41y58z5" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y59z5.c",
  "south" : DIR+"/rooms/x41y57z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
