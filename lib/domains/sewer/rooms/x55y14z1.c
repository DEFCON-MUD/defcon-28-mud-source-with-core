inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 1 }));
  set_short( "Corridor - x55y14z1" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y14z1.c",
  "east" : DIR+"/rooms/x56y14z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
