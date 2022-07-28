inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 24, 8 }));
  set_short( "Corridor - x56y24z8" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y24z8.c",
  "east" : DIR+"/rooms/x57y24z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
