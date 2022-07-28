inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 14, 6 }));
  set_short( "Corridor - x54y14z6" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y14z6.c",
  "east" : DIR+"/rooms/x55y14z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
