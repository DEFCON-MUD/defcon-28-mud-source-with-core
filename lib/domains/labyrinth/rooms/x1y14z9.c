inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 9 }));
  set_short( "Passage - x1y14z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y15z9.c",
  "south" : DIR+"/rooms/x1y13z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
