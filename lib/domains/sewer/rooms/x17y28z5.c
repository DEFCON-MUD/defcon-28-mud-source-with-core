inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 5 }));
  set_short( "Passage - x17y28z5" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z5.c",
  "east" : DIR+"/rooms/x18y28z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
