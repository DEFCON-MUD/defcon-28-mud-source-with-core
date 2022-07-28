inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 6, 5 }));
  set_short( "Passage - x50y6z5" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y6z5.c",
  "east" : DIR+"/rooms/x51y6z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
