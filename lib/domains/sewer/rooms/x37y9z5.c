inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 9, 5 }));
  set_short( "Passage - x37y9z5" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y10z5.c",
  "south" : DIR+"/rooms/x37y8z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
