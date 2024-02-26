inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 44, 8 }));
  set_short( "Corridor - x12y44z8" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y44z8.c",
  "east" : DIR+"/rooms/x13y44z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
