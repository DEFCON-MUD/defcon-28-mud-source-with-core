inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 50, 5 }));
  set_short( "Corridor - x56y50z5" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y50z5.c",
  "east" : DIR+"/rooms/x57y50z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
