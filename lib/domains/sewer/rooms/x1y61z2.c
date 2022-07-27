inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 2 }));
  set_short( "Passage - x1y61z2" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z2.c",
  "south" : DIR+"/rooms/x1y60z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
