inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 34, 8 }));
  set_short( "Passage - x43y34z8" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y34z8.c",
  "south" : DIR+"/rooms/x43y33z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
