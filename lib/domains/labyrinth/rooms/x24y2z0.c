inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 2, 0 }));
  set_short( "Passage - x24y2z0" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y2z0.c",
  "east" : DIR+"/rooms/x25y2z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
