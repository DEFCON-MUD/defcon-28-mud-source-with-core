inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 14, 4 }));
  set_short( "Corridor - x20y14z4" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y14z4.c",
  "east" : DIR+"/rooms/x21y14z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
