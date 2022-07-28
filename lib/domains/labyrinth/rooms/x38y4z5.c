inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 4, 5 }));
  set_short( "Passage - x38y4z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y4z5.c",
  "east" : DIR+"/rooms/x39y4z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
