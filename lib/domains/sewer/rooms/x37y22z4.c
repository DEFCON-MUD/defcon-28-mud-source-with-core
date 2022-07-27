inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 4 }));
  set_short( "Passage - x37y22z4" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y22z4.c",
  "east" : DIR+"/rooms/x38y22z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
