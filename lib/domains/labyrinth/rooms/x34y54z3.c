inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 54, 3 }));
  set_short( "Passage - x34y54z3" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y54z3.c",
  "east" : DIR+"/rooms/x35y54z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
