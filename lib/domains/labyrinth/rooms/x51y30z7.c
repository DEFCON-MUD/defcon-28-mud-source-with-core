inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 7 }));
  set_short( "Corridor - x51y30z7" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y30z7.c",
  "east" : DIR+"/rooms/x52y30z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
