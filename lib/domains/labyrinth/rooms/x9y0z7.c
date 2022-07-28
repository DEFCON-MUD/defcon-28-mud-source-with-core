inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 7 }));
  set_short( "Corridor - x9y0z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z7.c",
  "east" : DIR+"/rooms/x10y0z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
