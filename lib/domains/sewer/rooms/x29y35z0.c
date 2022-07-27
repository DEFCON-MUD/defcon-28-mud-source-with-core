inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 35, 0 }));
  set_short( "Corridor - x29y35z0" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y36z0.c",
  "south" : DIR+"/rooms/x29y34z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
