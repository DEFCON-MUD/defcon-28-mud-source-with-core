inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 53, 8 }));
  set_short( "Passage - x9y53z8" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y54z8.c",
  "south" : DIR+"/rooms/x9y52z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
