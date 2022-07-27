inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 11, 4 }));
  set_short( "Corridor - x55y11z4" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y12z4.c",
  "south" : DIR+"/rooms/x55y10z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
