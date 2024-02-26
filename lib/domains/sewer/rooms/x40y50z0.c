inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 50, 0 }));
  set_short( "Passage - x40y50z0" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y50z0.c",
  "east" : DIR+"/rooms/x41y50z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
