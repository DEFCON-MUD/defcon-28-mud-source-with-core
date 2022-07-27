inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 0 }));
  set_short( "Passage - x7y56z0" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y56z0.c",
  "south" : DIR+"/rooms/x7y55z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
