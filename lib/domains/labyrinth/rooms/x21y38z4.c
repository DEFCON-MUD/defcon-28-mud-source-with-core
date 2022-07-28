inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 4 }));
  set_short( "Hallway - x21y38z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y38z4.c",
  "south" : DIR+"/rooms/x21y37z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
