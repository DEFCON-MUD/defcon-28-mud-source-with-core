inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 7 }));
  set_short( "Corridor - x61y14z7" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y15z7.c",
  "south" : DIR+"/rooms/x61y13z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
