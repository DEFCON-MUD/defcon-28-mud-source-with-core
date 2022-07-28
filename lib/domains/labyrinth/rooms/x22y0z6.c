inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 6 }));
  set_short( "Passage - x22y0z6" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z6.c",
  "east" : DIR+"/rooms/x23y0z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
