inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 57, 9 }));
  set_short( "Passage - x17y57z9" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y58z9.c",
  "south" : DIR+"/rooms/x17y56z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
