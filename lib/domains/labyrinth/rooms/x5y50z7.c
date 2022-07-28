inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 50, 7 }));
  set_short( "Hallway - x5y50z7" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y50z7.c",
  "south" : DIR+"/rooms/x5y49z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
