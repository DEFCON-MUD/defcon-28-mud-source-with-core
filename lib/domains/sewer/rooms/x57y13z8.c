inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 13, 8 }));
  set_short( "Passage - x57y13z8" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y14z8.c",
  "south" : DIR+"/rooms/x57y12z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
