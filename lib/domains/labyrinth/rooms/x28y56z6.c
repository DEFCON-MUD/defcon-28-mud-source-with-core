inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 56, 6 }));
  set_short( "Corridor - x28y56z6" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y56z6.c",
  "east" : DIR+"/rooms/x29y56z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
