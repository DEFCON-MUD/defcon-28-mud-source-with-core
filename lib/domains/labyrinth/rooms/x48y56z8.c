inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 56, 8 }));
  set_short( "Corridor - x48y56z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y56z8.c",
  "east" : DIR+"/rooms/x49y56z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
