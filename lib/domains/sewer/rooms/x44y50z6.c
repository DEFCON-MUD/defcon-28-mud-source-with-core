inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 50, 6 }));
  set_short( "Passage - x44y50z6" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y50z6.c",
  "east" : DIR+"/rooms/x45y50z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
