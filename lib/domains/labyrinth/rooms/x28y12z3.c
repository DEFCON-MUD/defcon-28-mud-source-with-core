inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 12, 3 }));
  set_short( "Corridor - x28y12z3" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y12z3.c",
  "east" : DIR+"/rooms/x29y12z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
