inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 8 }));
  set_short( "Passage - x41y40z8" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z8.c",
  "south" : DIR+"/rooms/x41y39z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
