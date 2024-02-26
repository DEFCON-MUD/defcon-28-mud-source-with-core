inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 6, 6 }));
  set_short( "Passage - x56y6z6" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y6z6.c",
  "east" : DIR+"/rooms/x57y6z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
