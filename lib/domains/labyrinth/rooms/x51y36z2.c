inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 2 }));
  set_short( "Passage - x51y36z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
