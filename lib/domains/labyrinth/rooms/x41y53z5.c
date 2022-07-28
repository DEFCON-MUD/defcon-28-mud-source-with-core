inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 53, 5 }));
  set_short( "Corridor - x41y53z5" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y54z5.c",
  "south" : DIR+"/rooms/x41y52z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
