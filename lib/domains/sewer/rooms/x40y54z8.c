inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 54, 8 }));
  set_short( "Hallway - x40y54z8" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y54z8.c",
  "east" : DIR+"/rooms/x41y54z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
