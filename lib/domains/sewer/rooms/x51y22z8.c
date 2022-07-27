inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 8 }));
  set_short( "Passage - x51y22z8" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y22z8.c",
  "east" : DIR+"/rooms/x52y22z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
