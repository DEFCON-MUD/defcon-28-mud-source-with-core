inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 2 }));
  set_short( "Passage - x47y28z2" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y28z2.c",
  "north" : DIR+"/rooms/x47y29z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
