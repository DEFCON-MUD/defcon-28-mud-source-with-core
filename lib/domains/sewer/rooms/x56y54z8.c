inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 54, 8 }));
  set_short( "Corridor - x56y54z8" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y54z8.c",
  "east" : DIR+"/rooms/x57y54z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
