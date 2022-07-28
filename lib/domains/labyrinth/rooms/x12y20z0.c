inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 20, 0 }));
  set_short( "Passage - x12y20z0" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y20z0.c",
  "east" : DIR+"/rooms/x13y20z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
