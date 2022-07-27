inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 0 }));
  set_short( "Hallway - x19y38z0" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y38z0.c",
  "east" : DIR+"/rooms/x20y38z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
