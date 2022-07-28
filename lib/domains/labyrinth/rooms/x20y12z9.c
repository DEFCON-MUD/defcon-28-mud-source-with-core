inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 12, 9 }));
  set_short( "Passage - x20y12z9" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y12z9.c",
  "east" : DIR+"/rooms/x21y12z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
