inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 53, 9 }));
  set_short( "Passage - x61y53z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y54z9.c",
  "south" : DIR+"/rooms/x61y52z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
