inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 9 }));
  set_short( "Hallway - x13y26z9" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y26z9.c",
  "east" : DIR+"/rooms/x14y26z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
