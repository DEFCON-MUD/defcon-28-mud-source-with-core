inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 9 }));
  set_short( "Passage - x39y44z9" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y44z9.c",
  "east" : DIR+"/rooms/x40y44z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
