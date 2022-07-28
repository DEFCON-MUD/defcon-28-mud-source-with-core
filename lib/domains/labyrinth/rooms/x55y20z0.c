inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 20, 0 }));
  set_short( "Corridor - x55y20z0" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y20z0.c",
  "east" : DIR+"/rooms/x56y20z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
