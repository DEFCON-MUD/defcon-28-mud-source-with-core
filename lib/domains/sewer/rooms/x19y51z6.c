inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 51, 6 }));
  set_short( "Passage - x19y51z6" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y52z6.c",
  "south" : DIR+"/rooms/x19y50z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
