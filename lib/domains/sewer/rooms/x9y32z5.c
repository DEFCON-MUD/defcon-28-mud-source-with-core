inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 5 }));
  set_short( "Passage - x9y32z5" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y32z5.c",
  "north" : DIR+"/rooms/x9y33z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
