inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 18, 2 }));
  set_short( "Hallway - x54y18z2" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y18z2.c",
  "east" : DIR+"/rooms/x55y18z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
