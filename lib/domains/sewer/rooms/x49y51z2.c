inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 51, 2 }));
  set_short( "Corridor - x49y51z2" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y52z2.c",
  "south" : DIR+"/rooms/x49y50z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
