inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 22, 0 }));
  set_short( "Hallway - x44y22z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y22z0.c",
  "east" : DIR+"/rooms/x45y22z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
