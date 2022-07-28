inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 0, 0 }));
  set_short( "Hallway - x43y0z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y0z0.c",
  "east" : DIR+"/rooms/x44y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
