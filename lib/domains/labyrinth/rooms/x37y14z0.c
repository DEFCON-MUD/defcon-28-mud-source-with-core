inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 0 }));
  set_short( "Passage - x37y14z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y14z0.c",
  "east" : DIR+"/rooms/x38y14z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
