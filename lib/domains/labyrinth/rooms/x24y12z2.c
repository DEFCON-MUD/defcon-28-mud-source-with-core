inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 12, 2 }));
  set_short( "Corridor - x24y12z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y12z2.c",
  "east" : DIR+"/rooms/x25y12z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
