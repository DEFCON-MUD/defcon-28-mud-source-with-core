inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 3 }));
  set_short( "Hallway - x19y58z3" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z3.c",
  "north" : DIR+"/rooms/x19y59z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
