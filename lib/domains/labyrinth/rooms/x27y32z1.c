inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 1 }));
  set_short( "Passage - x27y32z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y33z1.c",
  "south" : DIR+"/rooms/x27y31z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
