inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 38, 1 }));
  set_short( "Hallway - x53y38z1" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y38z1.c",
  "north" : DIR+"/rooms/x53y39z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
