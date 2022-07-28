inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 30, 6 }));
  set_short( "Hallway - x16y30z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y30z6.c",
  "east" : DIR+"/rooms/x17y30z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
