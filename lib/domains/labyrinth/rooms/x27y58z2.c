inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 58, 2 }));
  set_short( "Corridor - x27y58z2" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y58z2.c",
  "north" : DIR+"/rooms/x27y59z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
