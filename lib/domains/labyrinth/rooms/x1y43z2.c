inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 43, 2 }));
  set_short( "Passage - x1y43z2" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y44z2.c",
  "south" : DIR+"/rooms/x1y42z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
