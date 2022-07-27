inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 7, 8 }));
  set_short( "Hallway - x13y7z8" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y8z8.c",
  "south" : DIR+"/rooms/x13y6z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
