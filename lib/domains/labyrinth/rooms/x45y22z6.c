inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 6 }));
  set_short( "Hallway - x45y22z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y22z6.c",
  "east" : DIR+"/rooms/x46y22z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
