inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 62, 8 }));
  set_short( "Passage - x32y62z8" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y62z8.c",
  "east" : DIR+"/rooms/x33y62z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
