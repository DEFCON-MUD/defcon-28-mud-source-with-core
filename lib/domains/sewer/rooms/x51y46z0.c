inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 0 }));
  set_short( "Corridor - x51y46z0" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y46z0.c",
  "east" : DIR+"/rooms/x52y46z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
