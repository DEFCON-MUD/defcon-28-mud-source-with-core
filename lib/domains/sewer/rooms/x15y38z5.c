inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 38, 5 }));
  set_short( "Passage - x15y38z5" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y38z5.c",
  "north" : DIR+"/rooms/x15y39z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
