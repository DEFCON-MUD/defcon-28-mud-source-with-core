inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 13, 1 }));
  set_short( "Corridor - x43y13z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y14z1.c",
  "south" : DIR+"/rooms/x43y12z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
