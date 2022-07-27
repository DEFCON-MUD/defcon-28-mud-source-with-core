inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 40, 9 }));
  set_short( "Passage - x19y40z9" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y41z9.c",
  "south" : DIR+"/rooms/x19y39z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
