inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 1 }));
  set_short( "Passage - x23y54z1" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y55z1.c",
  "south" : DIR+"/rooms/x23y53z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
