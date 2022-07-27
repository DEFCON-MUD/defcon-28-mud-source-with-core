inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 3 }));
  set_short( "Corridor - x43y4z3" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y5z3.c",
  "south" : DIR+"/rooms/x43y3z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
