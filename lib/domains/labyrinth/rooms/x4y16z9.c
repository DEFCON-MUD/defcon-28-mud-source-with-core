inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 16, 9 }));
  set_short( "Passage - x4y16z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y16z9.c",
  "east" : DIR+"/rooms/x5y16z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
