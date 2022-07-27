inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 39, 8 }));
  set_short( "Corridor - x51y39z8" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y40z8.c",
  "south" : DIR+"/rooms/x51y38z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
