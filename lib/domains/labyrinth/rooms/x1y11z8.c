inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 8 }));
  set_short( "Corridor - x1y11z8" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z8.c",
  "south" : DIR+"/rooms/x1y10z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
