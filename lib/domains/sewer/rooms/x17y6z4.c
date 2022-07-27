inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 4 }));
  set_short( "Hallway - x17y6z4" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y6z4.c",
  "north" : DIR+"/rooms/x17y7z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
