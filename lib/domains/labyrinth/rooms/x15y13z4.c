inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 13, 4 }));
  set_short( "Corridor - x15y13z4" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y14z4.c",
  "south" : DIR+"/rooms/x15y12z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
