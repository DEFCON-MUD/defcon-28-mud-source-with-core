inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 6 }));
  set_short( "Corridor - x1y23z6" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z6.c",
  "south" : DIR+"/rooms/x1y22z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
