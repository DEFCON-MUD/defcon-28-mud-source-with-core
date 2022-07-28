inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 2 }));
  set_short( "Passage - x28y0z2" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z2.c",
  "east" : DIR+"/rooms/x29y0z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
