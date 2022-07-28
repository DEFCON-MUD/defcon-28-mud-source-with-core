inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 10, 7 }));
  set_short( "Passage - x34y10z7" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y10z7.c",
  "east" : DIR+"/rooms/x35y10z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
