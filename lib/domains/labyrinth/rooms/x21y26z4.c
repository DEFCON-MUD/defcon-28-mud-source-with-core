inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 4 }));
  set_short( "Hallway - x21y26z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y27z4.c",
  "south" : DIR+"/rooms/x21y25z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
