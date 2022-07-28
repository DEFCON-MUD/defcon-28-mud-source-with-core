inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 34, 2 }));
  set_short( "Corridor - x10y34z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y34z2.c",
  "east" : DIR+"/rooms/x11y34z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
