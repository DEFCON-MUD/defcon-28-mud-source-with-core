inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 2, 6 }));
  set_short( "Corridor - x23y2z6" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y2z6.c",
  "north" : DIR+"/rooms/x23y3z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
