inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 6 }));
  set_short( "Hallway - x55y4z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y4z6.c",
  "east" : DIR+"/rooms/x56y4z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
