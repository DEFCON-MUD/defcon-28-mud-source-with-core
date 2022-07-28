inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 62, 6 }));
  set_short( "Passage - x39y62z6" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y62z6.c",
  "east" : DIR+"/rooms/x40y62z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
