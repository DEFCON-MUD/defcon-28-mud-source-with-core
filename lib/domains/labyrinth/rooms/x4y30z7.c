inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 30, 7 }));
  set_short( "Hallway - x4y30z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y30z7.c",
  "east" : DIR+"/rooms/x5y30z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
