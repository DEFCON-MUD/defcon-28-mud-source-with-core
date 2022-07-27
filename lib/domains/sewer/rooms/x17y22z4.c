inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 4 }));
  set_short( "Passage - x17y22z4" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y23z4.c",
  "south" : DIR+"/rooms/x17y21z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
