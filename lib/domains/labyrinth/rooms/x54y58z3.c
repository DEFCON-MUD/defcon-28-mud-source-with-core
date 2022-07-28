inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 58, 3 }));
  set_short( "Corridor - x54y58z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y58z3.c",
  "east" : DIR+"/rooms/x55y58z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
