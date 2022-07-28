inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 56, 2 }));
  set_short( "Passage - x49y56z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y56z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
