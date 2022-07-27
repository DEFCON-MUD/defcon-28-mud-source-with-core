inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 3, 9 }));
  set_short( "Corridor - x51y3z9" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y4z9.c",
  "south" : DIR+"/rooms/x51y2z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
