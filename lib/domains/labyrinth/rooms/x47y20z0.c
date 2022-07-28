inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 0 }));
  set_short( "Hallway - x47y20z0" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y20z0.c",
  "east" : DIR+"/rooms/x48y20z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
