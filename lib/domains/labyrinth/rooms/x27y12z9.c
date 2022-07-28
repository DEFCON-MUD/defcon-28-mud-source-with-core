inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 9 }));
  set_short( "Corridor - x27y12z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y12z9.c",
  "south" : DIR+"/rooms/x27y11z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
