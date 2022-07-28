inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 42, 2 }));
  set_short( "Corridor - x13y42z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y42z2.c",
  "east" : DIR+"/rooms/x14y42z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
