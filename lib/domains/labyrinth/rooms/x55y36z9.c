inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 9 }));
  set_short( "Corridor - x55y36z9" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y36z9.c",
  "east" : DIR+"/rooms/x56y36z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
