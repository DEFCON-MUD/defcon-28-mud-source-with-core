inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 2, 0 }));
  set_short( "Corridor - x57y2z0" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y2z0.c",
  "east" : DIR+"/rooms/x58y2z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
