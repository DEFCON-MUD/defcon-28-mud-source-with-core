inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 27, 7 }));
  set_short( "Corridor - x11y27z7" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y28z7.c",
  "south" : DIR+"/rooms/x11y26z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
