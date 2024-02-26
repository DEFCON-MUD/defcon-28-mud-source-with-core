inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 57, 1 }));
  set_short( "Corridor - x43y57z1" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y58z1.c",
  "south" : DIR+"/rooms/x43y56z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
