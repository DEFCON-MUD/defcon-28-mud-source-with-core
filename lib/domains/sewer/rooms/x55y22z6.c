inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 6 }));
  set_short( "Hallway - x55y22z6" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y23z6.c",
  "south" : DIR+"/rooms/x55y21z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
