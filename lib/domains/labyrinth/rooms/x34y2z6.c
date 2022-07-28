inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 2, 6 }));
  set_short( "Passage - x34y2z6" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y2z6.c",
  "east" : DIR+"/rooms/x35y2z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
