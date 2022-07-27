inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 48, 1 }));
  set_short( "Passage - x13y48z1" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y48z1.c",
  "east" : DIR+"/rooms/x14y48z1.c",
  "south" : DIR+"/rooms/x13y47z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
