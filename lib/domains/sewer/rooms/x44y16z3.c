inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 16, 3 }));
  set_short( "Corridor - x44y16z3" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y16z3.c",
  "east" : DIR+"/rooms/x45y16z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
