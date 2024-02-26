inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 26, 0 }));
  set_short( "Passage - x42y26z0" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y26z0.c",
  "east" : DIR+"/rooms/x43y26z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
