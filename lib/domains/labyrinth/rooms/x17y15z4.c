inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 15, 4 }));
  set_short( "Hallway - x17y15z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y16z4.c",
  "south" : DIR+"/rooms/x17y14z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
