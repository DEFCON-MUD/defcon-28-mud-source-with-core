inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 57, 9 }));
  set_short( "Passage - x7y57z9" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y58z9.c",
  "south" : DIR+"/rooms/x7y56z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
