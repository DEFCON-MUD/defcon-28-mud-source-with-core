inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 9 }));
  set_short( "Corridor - x7y56z9" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y57z9.c",
  "south" : DIR+"/rooms/x7y55z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
