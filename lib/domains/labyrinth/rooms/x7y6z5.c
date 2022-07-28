inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 5 }));
  set_short( "Passage - x7y6z5" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y7z5.c",
  "south" : DIR+"/rooms/x7y5z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
