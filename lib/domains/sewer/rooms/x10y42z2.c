inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 42, 2 }));
  set_short( "Hallway - x10y42z2" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y42z2.c",
  "east" : DIR+"/rooms/x11y42z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
