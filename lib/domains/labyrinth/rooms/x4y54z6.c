inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 54, 6 }));
  set_short( "Corridor - x4y54z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y54z6.c",
  "east" : DIR+"/rooms/x5y54z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
