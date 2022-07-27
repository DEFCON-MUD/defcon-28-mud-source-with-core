inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 4 }));
  set_short( "Passage - x1y17z4" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z4.c",
  "south" : DIR+"/rooms/x1y16z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
