inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 2, 7 }));
  set_short( "Corridor - x20y2z7" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y2z7.c",
  "east" : DIR+"/rooms/x21y2z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
