inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 3 }));
  set_short( "Corridor - x55y4z3" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y4z3.c",
  "east" : DIR+"/rooms/x56y4z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
