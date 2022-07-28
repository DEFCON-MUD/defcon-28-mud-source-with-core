inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 23, 6 }));
  set_short( "Corridor - x29y23z6" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y24z6.c",
  "south" : DIR+"/rooms/x29y22z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
