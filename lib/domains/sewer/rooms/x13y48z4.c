inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 48, 4 }));
  set_short( "Passage - x13y48z4" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y49z4.c",
  "south" : DIR+"/rooms/x13y47z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
