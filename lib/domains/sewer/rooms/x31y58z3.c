inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 3 }));
  set_short( "Hallway - x31y58z3" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y58z3.c",
  "east" : DIR+"/rooms/x32y58z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
