inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 1 }));
  set_short( "Hallway - x37y20z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y20z1.c",
  "south" : DIR+"/rooms/x37y19z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
