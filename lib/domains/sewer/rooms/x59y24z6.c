inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 6 }));
  set_short( "Passage - x59y24z6" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y25z6.c",
  "south" : DIR+"/rooms/x59y23z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
