inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 11, 6 }));
  set_short( "Corridor - x45y11z6" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y12z6.c",
  "south" : DIR+"/rooms/x45y10z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
