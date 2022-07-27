inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 7, 3 }));
  set_short( "Hallway - x59y7z3" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y8z3.c",
  "south" : DIR+"/rooms/x59y6z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
