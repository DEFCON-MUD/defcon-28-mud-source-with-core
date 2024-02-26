inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 1 }));
  set_short( "Passage - x15y42z1" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y42z1.c",
  "east" : DIR+"/rooms/x16y42z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
