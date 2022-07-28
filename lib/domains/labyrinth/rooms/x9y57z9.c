inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 57, 9 }));
  set_short( "Passage - x9y57z9" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y58z9.c",
  "south" : DIR+"/rooms/x9y56z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
