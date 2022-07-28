inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 30, 9 }));
  set_short( "Passage - x23y30z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y30z9.c",
  "south" : DIR+"/rooms/x23y29z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
