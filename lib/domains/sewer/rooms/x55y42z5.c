inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 5 }));
  set_short( "Hallway - x55y42z5" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y42z5.c",
  "north" : DIR+"/rooms/x55y43z5.c",
  "south" : DIR+"/rooms/x55y41z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
