inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 29, 2 }));
  set_short( "Passage - x55y29z2" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y30z2.c",
  "south" : DIR+"/rooms/x55y28z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
