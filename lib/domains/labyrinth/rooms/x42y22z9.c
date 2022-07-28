inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 22, 9 }));
  set_short( "Corridor - x42y22z9" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y22z9.c",
  "east" : DIR+"/rooms/x43y22z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
