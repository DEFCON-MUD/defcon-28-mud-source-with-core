inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 48, 7 }));
  set_short( "Passage - x30y48z7" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y48z7.c",
  "east" : DIR+"/rooms/x31y48z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
