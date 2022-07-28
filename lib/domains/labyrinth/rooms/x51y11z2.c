inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 11, 2 }));
  set_short( "Passage - x51y11z2" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y12z2.c",
  "south" : DIR+"/rooms/x51y10z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
