inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 6 }));
  set_short( "Passage - x7y58z6" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y58z6.c",
  "south" : DIR+"/rooms/x7y57z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
