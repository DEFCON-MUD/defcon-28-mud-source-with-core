inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 18, 1 }));
  set_short( "Passage - x27y18z1" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y18z1.c",
  "south" : DIR+"/rooms/x27y17z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
