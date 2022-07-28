inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 30, 6 }));
  set_short( "Passage - x48y30z6" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y30z6.c",
  "east" : DIR+"/rooms/x49y30z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
