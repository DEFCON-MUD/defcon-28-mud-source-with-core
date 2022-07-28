inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 5 }));
  set_short( "Hallway - x43y24z5" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y25z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
