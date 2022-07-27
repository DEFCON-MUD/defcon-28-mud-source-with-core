inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 58, 9 }));
  set_short( "Passage - x49y58z9" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y58z9.c",
  "south" : DIR+"/rooms/x49y57z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
