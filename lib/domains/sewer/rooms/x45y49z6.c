inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 49, 6 }));
  set_short( "Corridor - x45y49z6" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y50z6.c",
  "south" : DIR+"/rooms/x45y48z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
