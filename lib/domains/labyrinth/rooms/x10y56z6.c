inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 56, 6 }));
  set_short( "Hallway - x10y56z6" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y56z6.c",
  "east" : DIR+"/rooms/x11y56z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
