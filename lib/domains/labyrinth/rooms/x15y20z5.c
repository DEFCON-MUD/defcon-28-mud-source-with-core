inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 5 }));
  set_short( "Hallway - x15y20z5" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z5.c",
  "north" : DIR+"/rooms/x15y21z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
