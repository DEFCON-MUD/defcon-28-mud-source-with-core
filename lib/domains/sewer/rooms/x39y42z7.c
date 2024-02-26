inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 7 }));
  set_short( "Hallway - x39y42z7" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y42z7.c",
  "north" : DIR+"/rooms/x39y43z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
