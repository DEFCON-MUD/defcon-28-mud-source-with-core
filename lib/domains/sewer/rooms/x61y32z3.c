inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 3 }));
  set_short( "Corridor - x61y32z3" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y32z3.c",
  "south" : DIR+"/rooms/x61y31z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
