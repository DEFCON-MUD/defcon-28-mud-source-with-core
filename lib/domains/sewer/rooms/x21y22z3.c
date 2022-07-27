inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 3 }));
  set_short( "Corridor - x21y22z3" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y22z3.c",
  "south" : DIR+"/rooms/x21y21z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
