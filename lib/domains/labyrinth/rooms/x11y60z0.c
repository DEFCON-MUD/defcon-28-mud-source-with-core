inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 60, 0 }));
  set_short( "Corridor - x11y60z0" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y60z0.c",
  "south" : DIR+"/rooms/x11y59z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
