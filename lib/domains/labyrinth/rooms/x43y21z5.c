inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 21, 5 }));
  set_short( "Corridor - x43y21z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y22z5.c",
  "south" : DIR+"/rooms/x43y20z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
