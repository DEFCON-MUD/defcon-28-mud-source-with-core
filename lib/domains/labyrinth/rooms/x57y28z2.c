inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 2 }));
  set_short( "Corridor - x57y28z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y28z2.c",
  "east" : DIR+"/rooms/x58y28z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
