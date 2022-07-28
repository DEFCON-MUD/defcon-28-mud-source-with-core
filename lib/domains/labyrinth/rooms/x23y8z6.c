inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 6 }));
  set_short( "Hallway - x23y8z6" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y8z6.c",
  "south" : DIR+"/rooms/x23y7z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
