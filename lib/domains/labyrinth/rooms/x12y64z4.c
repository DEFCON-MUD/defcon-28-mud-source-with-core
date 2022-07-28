inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 4 }));
  set_short( "Passage - x12y64z4" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z4.c",
  "east" : DIR+"/rooms/x13y64z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
