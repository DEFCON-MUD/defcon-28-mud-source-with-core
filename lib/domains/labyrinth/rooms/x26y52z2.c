inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 52, 2 }));
  set_short( "Corridor - x26y52z2" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y52z2.c",
  "east" : DIR+"/rooms/x27y52z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
