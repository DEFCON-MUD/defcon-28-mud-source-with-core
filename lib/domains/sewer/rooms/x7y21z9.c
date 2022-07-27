inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 9 }));
  set_short( "Passage - x7y21z9" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z9.c",
  "south" : DIR+"/rooms/x7y20z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
