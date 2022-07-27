inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 4 }));
  set_short( "Hallway - x21y16z4" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y17z4.c",
  "south" : DIR+"/rooms/x21y15z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
