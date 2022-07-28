inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 54, 7 }));
  set_short( "Passage - x6y54z7" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y54z7.c",
  "east" : DIR+"/rooms/x7y54z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
