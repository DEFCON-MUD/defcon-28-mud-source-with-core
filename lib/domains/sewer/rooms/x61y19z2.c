inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 19, 2 }));
  set_short( "Hallway - x61y19z2" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y20z2.c",
  "south" : DIR+"/rooms/x61y18z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
