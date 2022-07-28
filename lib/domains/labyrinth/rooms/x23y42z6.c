inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 6 }));
  set_short( "Corridor - x23y42z6" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y42z6.c",
  "north" : DIR+"/rooms/x23y43z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
