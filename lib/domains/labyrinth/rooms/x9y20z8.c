inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 8 }));
  set_short( "Passage - x9y20z8" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y21z8.c",
  "south" : DIR+"/rooms/x9y19z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
