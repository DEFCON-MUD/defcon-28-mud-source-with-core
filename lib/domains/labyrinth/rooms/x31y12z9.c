inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 12, 9 }));
  set_short( "Hallway - x31y12z9" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y13z9.c",
  "south" : DIR+"/rooms/x31y11z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
