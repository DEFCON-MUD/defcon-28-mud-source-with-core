inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 55, 6 }));
  set_short( "Corridor - x23y55z6" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y56z6.c",
  "south" : DIR+"/rooms/x23y54z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
