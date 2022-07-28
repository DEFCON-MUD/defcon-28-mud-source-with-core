inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 62, 5 }));
  set_short( "Corridor - x11y62z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y62z5.c",
  "east" : DIR+"/rooms/x12y62z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
