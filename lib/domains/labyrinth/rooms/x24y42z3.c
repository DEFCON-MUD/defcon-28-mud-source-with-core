inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 42, 3 }));
  set_short( "Passage - x24y42z3" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y42z3.c",
  "east" : DIR+"/rooms/x25y42z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
