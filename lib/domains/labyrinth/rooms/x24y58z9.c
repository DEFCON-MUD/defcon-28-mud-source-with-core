inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 58, 9 }));
  set_short( "Passage - x24y58z9" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y58z9.c",
  "east" : DIR+"/rooms/x25y58z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
