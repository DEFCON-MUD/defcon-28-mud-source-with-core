inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 10, 6 }));
  set_short( "Hallway - x9y10z6" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y10z6.c",
  "north" : DIR+"/rooms/x9y11z6.c",
  "south" : DIR+"/rooms/x9y9z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
