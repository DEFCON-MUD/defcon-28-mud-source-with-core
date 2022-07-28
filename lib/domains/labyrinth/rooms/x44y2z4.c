inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 2, 4 }));
  set_short( "Passage - x44y2z4" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y2z4.c",
  "east" : DIR+"/rooms/x45y2z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
