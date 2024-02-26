inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 17, 8 }));
  set_short( "Passage - x47y17z8" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y18z8.c",
  "south" : DIR+"/rooms/x47y16z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
