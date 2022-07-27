inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 1 }));
  set_short( "Passage - x1y10z1" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z1.c",
  "north" : DIR+"/rooms/x1y11z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
