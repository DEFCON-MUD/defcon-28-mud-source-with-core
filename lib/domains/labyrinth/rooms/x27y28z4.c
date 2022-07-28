inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 28, 4 }));
  set_short( "Corridor - x27y28z4" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y28z4.c",
  "east" : DIR+"/rooms/x28y28z4.c",
  "south" : DIR+"/rooms/x27y27z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
