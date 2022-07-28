inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 60, 8 }));
  set_short( "Passage - x21y60z8" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y60z8.c",
  "north" : DIR+"/rooms/x21y61z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
