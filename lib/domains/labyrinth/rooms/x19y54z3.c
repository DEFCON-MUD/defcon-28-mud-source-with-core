inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 3 }));
  set_short( "Passage - x19y54z3" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y55z3.c",
  "south" : DIR+"/rooms/x19y53z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
