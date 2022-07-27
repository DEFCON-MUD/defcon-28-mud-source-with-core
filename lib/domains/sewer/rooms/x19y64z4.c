inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 64, 4 }));
  set_short( "Passage - x19y64z4" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y64z4.c",
  "east" : DIR+"/rooms/x20y64z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
