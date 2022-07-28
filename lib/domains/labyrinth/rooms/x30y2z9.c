inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 2, 9 }));
  set_short( "Corridor - x30y2z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y2z9.c",
  "east" : DIR+"/rooms/x31y2z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
