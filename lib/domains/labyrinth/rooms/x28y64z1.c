inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 1 }));
  set_short( "Corridor - x28y64z1" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z1.c",
  "east" : DIR+"/rooms/x29y64z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
