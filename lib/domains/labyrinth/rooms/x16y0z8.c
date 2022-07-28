inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 8 }));
  set_short( "Hallway - x16y0z8" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z8.c",
  "east" : DIR+"/rooms/x17y0z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
