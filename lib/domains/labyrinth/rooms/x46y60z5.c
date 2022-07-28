inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 60, 5 }));
  set_short( "Corridor - x46y60z5" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y60z5.c",
  "east" : DIR+"/rooms/x47y60z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
