inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 7 }));
  set_short( "Passage - x7y2z7" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y2z7.c",
  "north" : DIR+"/rooms/x7y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
