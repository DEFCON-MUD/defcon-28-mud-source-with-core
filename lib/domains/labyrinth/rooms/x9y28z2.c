inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 2 }));
  set_short( "Passage - x9y28z2" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y28z2.c",
  "north" : DIR+"/rooms/x9y29z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
