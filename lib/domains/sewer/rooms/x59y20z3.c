inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 3 }));
  set_short( "Corridor - x59y20z3" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y20z3.c",
  "east" : DIR+"/rooms/x60y20z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
