inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 59, 1 }));
  set_short( "Corridor - x29y59z1" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y60z1.c",
  "south" : DIR+"/rooms/x29y58z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
