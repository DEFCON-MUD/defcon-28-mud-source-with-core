inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 64, 5 }));
  set_short( "Hallway - x23y64z5" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y64z5.c",
  "east" : DIR+"/rooms/x24y64z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
