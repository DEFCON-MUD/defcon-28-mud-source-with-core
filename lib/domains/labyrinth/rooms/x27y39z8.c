inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 39, 8 }));
  set_short( "Passage - x27y39z8" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y40z8.c",
  "south" : DIR+"/rooms/x27y38z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
