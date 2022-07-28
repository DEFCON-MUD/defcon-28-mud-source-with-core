inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 55, 5 }));
  set_short( "Passage - x11y55z5" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y56z5.c",
  "south" : DIR+"/rooms/x11y54z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
