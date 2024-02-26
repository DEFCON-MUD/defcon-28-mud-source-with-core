inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 30, 9 }));
  set_short( "Corridor - x33y30z9" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y30z9.c",
  "north" : DIR+"/rooms/x33y31z9.c",
  "south" : DIR+"/rooms/x33y29z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
