inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 0, 9 }));
  set_short( "Corridor - x24y0z9" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y0z9.c",
  "east" : DIR+"/rooms/x25y0z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
