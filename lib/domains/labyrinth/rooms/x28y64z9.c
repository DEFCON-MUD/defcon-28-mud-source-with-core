inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 9 }));
  set_short( "Hallway - x28y64z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z9.c",
  "east" : DIR+"/rooms/x29y64z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
