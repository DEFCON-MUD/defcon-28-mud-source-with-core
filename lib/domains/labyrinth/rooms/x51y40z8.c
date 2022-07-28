inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 8 }));
  set_short( "Passage - x51y40z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y40z8.c",
  "south" : DIR+"/rooms/x51y39z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
