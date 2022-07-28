inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 5 }));
  set_short( "Passage - x45y38z5" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y38z5.c",
  "south" : DIR+"/rooms/x45y37z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
