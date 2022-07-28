inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 6 }));
  set_short( "Corridor - x11y20z6" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y20z6.c",
  "east" : DIR+"/rooms/x12y20z6.c",
  "south" : DIR+"/rooms/x11y19z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
