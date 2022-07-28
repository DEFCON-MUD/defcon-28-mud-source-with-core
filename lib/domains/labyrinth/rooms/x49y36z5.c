inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 36, 5 }));
  set_short( "Passage - x49y36z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y36z5.c",
  "east" : DIR+"/rooms/x50y36z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
