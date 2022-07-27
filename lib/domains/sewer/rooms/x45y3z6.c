inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 3, 6 }));
  set_short( "Corridor - x45y3z6" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y4z6.c",
  "south" : DIR+"/rooms/x45y2z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
