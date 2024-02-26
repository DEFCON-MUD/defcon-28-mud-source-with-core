inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 8 }));
  set_short( "Corridor - x11y30z8" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y30z8.c",
  "north" : DIR+"/rooms/x11y31z8.c",
  "south" : DIR+"/rooms/x11y29z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
