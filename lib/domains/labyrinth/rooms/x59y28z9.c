inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 28, 9 }));
  set_short( "Passage - x59y28z9" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y28z9.c",
  "south" : DIR+"/rooms/x59y27z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
