inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 0 }));
  set_short( "Passage - x1y18z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z0.c",
  "south" : DIR+"/rooms/x1y17z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
