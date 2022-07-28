inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 4 }));
  set_short( "Corridor - x59y48z4" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y48z4.c",
  "south" : DIR+"/rooms/x59y47z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
