inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 7 }));
  set_short( "Passage - x21y43z7" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z7.c",
  "south" : DIR+"/rooms/x21y42z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
