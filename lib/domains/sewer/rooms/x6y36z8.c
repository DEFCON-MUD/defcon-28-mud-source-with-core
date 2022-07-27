inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 36, 8 }));
  set_short( "Passage - x6y36z8" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y36z8.c",
  "east" : DIR+"/rooms/x7y36z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
