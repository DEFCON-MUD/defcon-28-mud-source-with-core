inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 64, 3 }));
  set_short( "Passage - x21y64z3" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y64z3.c",
  "east" : DIR+"/rooms/x22y64z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
