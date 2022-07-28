inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 4 }));
  set_short( "Corridor - x30y64z4" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z4.c",
  "east" : DIR+"/rooms/x31y64z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
