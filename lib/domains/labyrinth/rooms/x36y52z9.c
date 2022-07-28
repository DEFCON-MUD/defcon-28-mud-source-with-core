inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 52, 9 }));
  set_short( "Corridor - x36y52z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y52z9.c",
  "east" : DIR+"/rooms/x37y52z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
