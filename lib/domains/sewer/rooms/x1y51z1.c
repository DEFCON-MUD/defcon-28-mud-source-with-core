inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 51, 1 }));
  set_short( "Corridor - x1y51z1" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y52z1.c",
  "south" : DIR+"/rooms/x1y50z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
