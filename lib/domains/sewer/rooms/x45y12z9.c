inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 9 }));
  set_short( "Passage - x45y12z9" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y12z9.c",
  "north" : DIR+"/rooms/x45y13z9.c",
  "south" : DIR+"/rooms/x45y11z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
