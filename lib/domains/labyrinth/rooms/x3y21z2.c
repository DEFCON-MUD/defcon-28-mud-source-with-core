inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 21, 2 }));
  set_short( "Passage - x3y21z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y22z2.c",
  "south" : DIR+"/rooms/x3y20z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
