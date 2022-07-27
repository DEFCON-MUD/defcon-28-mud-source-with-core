inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 0, 4 }));
  set_short( "Hallway - x49y0z4" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y0z4.c",
  "east" : DIR+"/rooms/x50y0z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
