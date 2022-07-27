inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 57, 4 }));
  set_short( "Hallway - x1y57z4" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y58z4.c",
  "south" : DIR+"/rooms/x1y56z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
