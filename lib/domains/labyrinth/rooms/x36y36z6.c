inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 36, 6 }));
  set_short( "Passage - x36y36z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y36z6.c",
  "east" : DIR+"/rooms/x37y36z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
