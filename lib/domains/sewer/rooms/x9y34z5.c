inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 5 }));
  set_short( "Hallway - x9y34z5" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y35z5.c",
  "south" : DIR+"/rooms/x9y33z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
