inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 5 }));
  set_short( "Hallway - x35y34z5" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y34z5.c",
  "south" : DIR+"/rooms/x35y33z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
