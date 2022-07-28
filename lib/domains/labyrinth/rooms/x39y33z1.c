inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 33, 1 }));
  set_short( "Corridor - x39y33z1" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y34z1.c",
  "south" : DIR+"/rooms/x39y32z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
