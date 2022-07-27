inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 46, 2 }));
  set_short( "Corridor - x55y46z2" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y46z2.c",
  "north" : DIR+"/rooms/x55y47z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
