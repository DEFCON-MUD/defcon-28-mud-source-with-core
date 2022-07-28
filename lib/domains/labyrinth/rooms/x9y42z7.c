inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 42, 7 }));
  set_short( "Passage - x9y42z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y42z7.c",
  "north" : DIR+"/rooms/x9y43z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
