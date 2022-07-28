inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 62, 9 }));
  set_short( "Hallway - x12y62z9" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y62z9.c",
  "east" : DIR+"/rooms/x13y62z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
