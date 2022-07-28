inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 14, 2 }));
  set_short( "Corridor - x44y14z2" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y14z2.c",
  "east" : DIR+"/rooms/x45y14z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
