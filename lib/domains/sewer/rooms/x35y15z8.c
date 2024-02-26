inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 15, 8 }));
  set_short( "Passage - x35y15z8" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y16z8.c",
  "south" : DIR+"/rooms/x35y14z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
