inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 6 }));
  set_short( "Passage - x55y56z6" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y56z6.c",
  "east" : DIR+"/rooms/x56y56z6.c",
  "south" : DIR+"/rooms/x55y55z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
