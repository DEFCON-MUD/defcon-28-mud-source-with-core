inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 9 }));
  set_short( "Passage - x49y14z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y14z9.c",
  "east" : DIR+"/rooms/x50y14z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
