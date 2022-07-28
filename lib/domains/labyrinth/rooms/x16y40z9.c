inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 40, 9 }));
  set_short( "Passage - x16y40z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y40z9.c",
  "east" : DIR+"/rooms/x17y40z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
