inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 7 }));
  set_short( "Passage - x57y42z7" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z7.c",
  "east" : DIR+"/rooms/x58y42z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
