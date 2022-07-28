inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 2 }));
  set_short( "Passage - x13y50z2" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y50z2.c",
  "north" : DIR+"/rooms/x13y51z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
