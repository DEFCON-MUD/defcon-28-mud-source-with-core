inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 53, 9 }));
  set_short( "Passage - x61y53z9" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y54z9.c",
  "south" : DIR+"/rooms/x61y52z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
