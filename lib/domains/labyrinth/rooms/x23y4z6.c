inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 6 }));
  set_short( "Corridor - x23y4z6" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y4z6.c",
  "south" : DIR+"/rooms/x23y3z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
