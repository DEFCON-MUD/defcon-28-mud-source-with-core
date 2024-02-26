inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 0 }));
  set_short( "Corridor - x47y10z0" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y10z0.c",
  "east" : DIR+"/rooms/x48y10z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
