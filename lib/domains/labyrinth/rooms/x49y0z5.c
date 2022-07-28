inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 0, 5 }));
  set_short( "Corridor - x49y0z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y0z5.c",
  "east" : DIR+"/rooms/x50y0z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
