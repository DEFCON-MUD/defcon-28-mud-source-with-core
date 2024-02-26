inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 18, 2 }));
  set_short( "Passage - x10y18z2" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y18z2.c",
  "east" : DIR+"/rooms/x11y18z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
