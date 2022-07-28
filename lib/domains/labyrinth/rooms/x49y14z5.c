inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 5 }));
  set_short( "Corridor - x49y14z5" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "south" : DIR+"/rooms/x49y13z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
