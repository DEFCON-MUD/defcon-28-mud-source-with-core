inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 6 }));
  set_short( "Corridor - x39y54z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y54z6.c",
  "north" : DIR+"/rooms/x39y55z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
