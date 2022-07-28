inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 32, 6 }));
  set_short( "Passage - x44y32z6" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y32z6.c",
  "east" : DIR+"/rooms/x45y32z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
