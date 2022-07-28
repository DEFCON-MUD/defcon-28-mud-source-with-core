inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 62, 1 }));
  set_short( "Passage - x38y62z1" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y62z1.c",
  "east" : DIR+"/rooms/x39y62z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
