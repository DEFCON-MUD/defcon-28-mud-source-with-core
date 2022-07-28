inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 7, 6 }));
  set_short( "Passage - x31y7z6" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y8z6.c",
  "south" : DIR+"/rooms/x31y6z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
