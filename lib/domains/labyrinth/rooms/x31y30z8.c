inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 8 }));
  set_short( "Corridor - x31y30z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y30z8.c",
  "north" : DIR+"/rooms/x31y31z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
