inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 22, 5 }));
  set_short( "Passage - x12y22z5" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y22z5.c",
  "east" : DIR+"/rooms/x13y22z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
