inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 13, 2 }));
  set_short( "Corridor - x47y13z2" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y14z2.c",
  "south" : DIR+"/rooms/x47y12z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
