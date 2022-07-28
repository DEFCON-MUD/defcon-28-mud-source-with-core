inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 1 }));
  set_short( "Hallway - x54y60z1" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z1.c",
  "east" : DIR+"/rooms/x55y60z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
