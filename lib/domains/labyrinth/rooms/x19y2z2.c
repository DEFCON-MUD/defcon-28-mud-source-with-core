inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 2 }));
  set_short( "Hallway - x19y2z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z2.c",
  "east" : DIR+"/rooms/x20y2z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
