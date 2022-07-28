inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 64, 7 }));
  set_short( "Corridor - x47y64z7" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y64z7.c",
  "east" : DIR+"/rooms/x48y64z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
