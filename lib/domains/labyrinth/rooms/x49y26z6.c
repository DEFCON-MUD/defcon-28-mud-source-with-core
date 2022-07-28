inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 6 }));
  set_short( "Passage - x49y26z6" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y26z6.c",
  "east" : DIR+"/rooms/x50y26z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
