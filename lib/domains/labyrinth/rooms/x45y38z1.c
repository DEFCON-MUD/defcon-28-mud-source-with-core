inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 1 }));
  set_short( "Hallway - x45y38z1" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y38z1.c",
  "east" : DIR+"/rooms/x46y38z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
