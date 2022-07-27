inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 0 }));
  set_short( "Corridor - x1y36z0" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y37z0.c",
  "south" : DIR+"/rooms/x1y35z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
