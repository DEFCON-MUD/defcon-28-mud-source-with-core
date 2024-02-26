inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 37, 4 }));
  set_short( "Passage - x45y37z4" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y38z4.c",
  "south" : DIR+"/rooms/x45y36z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
