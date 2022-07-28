inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 38, 4 }));
  set_short( "Passage - x27y38z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y38z4.c",
  "east" : DIR+"/rooms/x28y38z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
