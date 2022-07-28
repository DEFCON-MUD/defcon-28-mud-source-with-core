inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 62, 8 }));
  set_short( "Hallway - x14y62z8" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y62z8.c",
  "east" : DIR+"/rooms/x15y62z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
