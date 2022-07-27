inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 4 }));
  set_short( "Passage - x49y60z4" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y61z4.c",
  "south" : DIR+"/rooms/x49y59z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
