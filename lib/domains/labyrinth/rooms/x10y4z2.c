inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 4, 2 }));
  set_short( "Corridor - x10y4z2" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y4z2.c",
  "east" : DIR+"/rooms/x11y4z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
