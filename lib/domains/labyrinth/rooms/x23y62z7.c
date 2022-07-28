inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 62, 7 }));
  set_short( "Hallway - x23y62z7" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y62z7.c",
  "east" : DIR+"/rooms/x24y62z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
