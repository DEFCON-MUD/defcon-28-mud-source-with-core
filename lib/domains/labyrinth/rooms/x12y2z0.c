inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 2, 0 }));
  set_short( "Hallway - x12y2z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y2z0.c",
  "east" : DIR+"/rooms/x13y2z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
