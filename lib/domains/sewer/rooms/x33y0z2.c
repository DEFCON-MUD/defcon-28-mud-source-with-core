inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 0, 2 }));
  set_short( "Passage - x33y0z2" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y0z2.c",
  "east" : DIR+"/rooms/x34y0z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
