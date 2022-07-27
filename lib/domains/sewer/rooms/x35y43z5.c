inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 43, 5 }));
  set_short( "Passage - x35y43z5" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y44z5.c",
  "south" : DIR+"/rooms/x35y42z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
