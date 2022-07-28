inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 0, 3 }));
  set_short( "Passage - x57y0z3" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y0z3.c",
  "east" : DIR+"/rooms/x58y0z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
