inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 5 }));
  set_short( "Passage - x33y26z5" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z5.c",
  "south" : DIR+"/rooms/x33y25z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
