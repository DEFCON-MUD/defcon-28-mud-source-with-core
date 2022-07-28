inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 53, 9 }));
  set_short( "Passage - x5y53z9" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y54z9.c",
  "south" : DIR+"/rooms/x5y52z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
