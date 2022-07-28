inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 30, 1 }));
  set_short( "Passage - x24y30z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y30z1.c",
  "east" : DIR+"/rooms/x25y30z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
