inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 6 }));
  set_short( "Corridor - x41y24z6" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y24z6.c",
  "south" : DIR+"/rooms/x41y23z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
