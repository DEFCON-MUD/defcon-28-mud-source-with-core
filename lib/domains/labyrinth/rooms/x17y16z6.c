inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 6 }));
  set_short( "Corridor - x17y16z6" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y16z6.c",
  "south" : DIR+"/rooms/x17y15z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
