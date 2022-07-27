inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 49, 2 }));
  set_short( "Passage - x3y49z2" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y50z2.c",
  "south" : DIR+"/rooms/x3y48z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
