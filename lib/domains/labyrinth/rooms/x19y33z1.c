inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 33, 1 }));
  set_short( "Passage - x19y33z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y34z1.c",
  "south" : DIR+"/rooms/x19y32z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
