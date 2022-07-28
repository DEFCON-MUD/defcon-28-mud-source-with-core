inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 28, 1 }));
  set_short( "Passage - x42y28z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y28z1.c",
  "east" : DIR+"/rooms/x43y28z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
