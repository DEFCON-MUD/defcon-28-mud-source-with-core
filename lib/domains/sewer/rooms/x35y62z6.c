inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 62, 6 }));
  set_short( "Hallway - x35y62z6" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y62z6.c",
  "east" : DIR+"/rooms/x36y62z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
