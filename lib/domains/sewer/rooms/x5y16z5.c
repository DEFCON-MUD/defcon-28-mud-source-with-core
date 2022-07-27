inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 5 }));
  set_short( "Hallway - x5y16z5" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y16z5.c",
  "north" : DIR+"/rooms/x5y17z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
