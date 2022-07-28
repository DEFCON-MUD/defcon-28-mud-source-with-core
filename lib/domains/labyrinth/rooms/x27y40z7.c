inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 7 }));
  set_short( "Hallway - x27y40z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y40z7.c",
  "south" : DIR+"/rooms/x27y39z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
