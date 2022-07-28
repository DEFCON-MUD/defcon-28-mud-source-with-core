inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 4 }));
  set_short( "Hallway - x25y2z4" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y2z4.c",
  "east" : DIR+"/rooms/x26y2z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
