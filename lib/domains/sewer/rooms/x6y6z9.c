inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 6, 9 }));
  set_short( "Passage - x6y6z9" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y6z9.c",
  "east" : DIR+"/rooms/x7y6z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
