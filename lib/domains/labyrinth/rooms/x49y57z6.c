inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 57, 6 }));
  set_short( "Passage - x49y57z6" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y58z6.c",
  "south" : DIR+"/rooms/x49y56z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
