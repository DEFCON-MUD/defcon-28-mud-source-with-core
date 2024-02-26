inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 4 }));
  set_short( "Hallway - x49y10z4" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y10z4.c",
  "south" : DIR+"/rooms/x49y9z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
