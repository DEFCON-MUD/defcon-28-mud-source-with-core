inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 3 }));
  set_short( "Corridor - x57y32z3" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y32z3.c",
  "north" : DIR+"/rooms/x57y33z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
