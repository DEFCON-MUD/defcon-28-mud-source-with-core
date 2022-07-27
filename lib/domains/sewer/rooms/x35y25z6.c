inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 25, 6 }));
  set_short( "Corridor - x35y25z6" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y26z6.c",
  "south" : DIR+"/rooms/x35y24z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
