inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 46, 2 }));
  set_short( "Hallway - x1y46z2" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y47z2.c",
  "south" : DIR+"/rooms/x1y45z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
