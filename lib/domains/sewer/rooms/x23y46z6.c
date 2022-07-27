inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 6 }));
  set_short( "Passage - x23y46z6" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y46z6.c",
  "east" : DIR+"/rooms/x24y46z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
