inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 35, 8 }));
  set_short( "Passage - x25y35z8" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y36z8.c",
  "south" : DIR+"/rooms/x25y34z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
