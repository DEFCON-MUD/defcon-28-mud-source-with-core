inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 56, 6 }));
  set_short( "Hallway - x49y56z6" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y56z6.c",
  "north" : DIR+"/rooms/x49y57z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
