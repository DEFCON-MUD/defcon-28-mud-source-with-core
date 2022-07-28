inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 60, 1 }));
  set_short( "Passage - x27y60z1" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y60z1.c",
  "east" : DIR+"/rooms/x28y60z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
