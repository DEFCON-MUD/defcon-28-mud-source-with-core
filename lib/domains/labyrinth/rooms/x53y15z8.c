inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 15, 8 }));
  set_short( "Hallway - x53y15z8" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y16z8.c",
  "south" : DIR+"/rooms/x53y14z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
