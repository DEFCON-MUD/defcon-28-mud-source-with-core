inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 6 }));
  set_short( "Passage - x11y42z6" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y42z6.c",
  "north" : DIR+"/rooms/x11y43z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
