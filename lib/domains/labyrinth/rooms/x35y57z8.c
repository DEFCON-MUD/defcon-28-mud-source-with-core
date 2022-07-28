inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 57, 8 }));
  set_short( "Corridor - x35y57z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y58z8.c",
  "south" : DIR+"/rooms/x35y56z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
