inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 2 }));
  set_short( "Corridor - x37y12z2" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y12z2.c",
  "east" : DIR+"/rooms/x38y12z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
