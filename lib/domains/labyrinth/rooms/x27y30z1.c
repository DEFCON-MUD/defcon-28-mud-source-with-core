inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 1 }));
  set_short( "Hallway - x27y30z1" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y30z1.c",
  "north" : DIR+"/rooms/x27y31z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
