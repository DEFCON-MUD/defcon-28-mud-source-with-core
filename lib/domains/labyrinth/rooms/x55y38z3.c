inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 3 }));
  set_short( "Passage - x55y38z3" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y39z3.c",
  "south" : DIR+"/rooms/x55y37z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
