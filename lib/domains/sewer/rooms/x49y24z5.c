inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 24, 5 }));
  set_short( "Corridor - x49y24z5" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "south" : DIR+"/rooms/x49y23z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
