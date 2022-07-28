inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 5 }));
  set_short( "Passage - x49y42z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y42z5.c",
  "east" : DIR+"/rooms/x50y42z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
