inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 6 }));
  set_short( "Passage - x35y14z6" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y14z6.c",
  "east" : DIR+"/rooms/x36y14z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
