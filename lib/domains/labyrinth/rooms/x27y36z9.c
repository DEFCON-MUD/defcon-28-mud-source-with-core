inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 36, 9 }));
  set_short( "Passage - x27y36z9" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y36z9.c",
  "south" : DIR+"/rooms/x27y35z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
