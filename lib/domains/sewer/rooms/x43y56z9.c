inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 56, 9 }));
  set_short( "Corridor - x43y56z9" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y56z9.c",
  "north" : DIR+"/rooms/x43y57z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
