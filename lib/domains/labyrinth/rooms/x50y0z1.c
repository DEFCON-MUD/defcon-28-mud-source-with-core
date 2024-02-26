inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 1 }));
  set_short( "Passage - x50y0z1" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z1.c",
  "east" : DIR+"/rooms/x51y0z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
