inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 58, 8 }));
  set_short( "Corridor - x27y58z8" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y58z8.c",
  "east" : DIR+"/rooms/x28y58z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
