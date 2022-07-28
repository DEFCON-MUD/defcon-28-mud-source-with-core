inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 50, 8 }));
  set_short( "Corridor - x24y50z8" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y50z8.c",
  "east" : DIR+"/rooms/x25y50z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
