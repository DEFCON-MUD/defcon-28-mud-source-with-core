inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 2, 0 }));
  set_short( "Passage - x28y2z0" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y2z0.c",
  "east" : DIR+"/rooms/x29y2z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
