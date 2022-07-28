inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 35, 5 }));
  set_short( "Hallway - x51y35z5" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y36z5.c",
  "south" : DIR+"/rooms/x51y34z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
