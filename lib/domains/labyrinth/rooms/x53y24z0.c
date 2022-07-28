inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 0 }));
  set_short( "Corridor - x53y24z0" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z0.c",
  "east" : DIR+"/rooms/x54y24z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
