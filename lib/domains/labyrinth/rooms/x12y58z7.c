inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 58, 7 }));
  set_short( "Corridor - x12y58z7" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y58z7.c",
  "east" : DIR+"/rooms/x13y58z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
