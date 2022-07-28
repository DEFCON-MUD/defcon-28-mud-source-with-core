inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 46, 0 }));
  set_short( "Corridor - x4y46z0" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y46z0.c",
  "east" : DIR+"/rooms/x5y46z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
