inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 6 }));
  set_short( "Corridor - x19y6z6" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y6z6.c",
  "north" : DIR+"/rooms/x19y7z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
