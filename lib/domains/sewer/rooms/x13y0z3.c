inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 0, 3 }));
  set_short( "Passage - x13y0z3" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y0z3.c",
  "east" : DIR+"/rooms/x14y0z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
