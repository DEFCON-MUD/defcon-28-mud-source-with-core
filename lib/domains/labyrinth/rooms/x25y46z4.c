inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 4 }));
  set_short( "Passage - x25y46z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y46z4.c",
  "south" : DIR+"/rooms/x25y45z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
