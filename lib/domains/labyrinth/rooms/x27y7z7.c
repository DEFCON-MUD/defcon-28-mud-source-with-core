inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 7 }));
  set_short( "Hallway - x27y7z7" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z7.c",
  "south" : DIR+"/rooms/x27y6z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
