inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 6 }));
  set_short( "Corridor - x59y8z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y8z6.c",
  "north" : DIR+"/rooms/x59y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
