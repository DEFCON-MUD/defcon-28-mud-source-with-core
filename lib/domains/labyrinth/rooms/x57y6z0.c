inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 0 }));
  set_short( "Corridor - x57y6z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y6z0.c",
  "east" : DIR+"/rooms/x58y6z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
