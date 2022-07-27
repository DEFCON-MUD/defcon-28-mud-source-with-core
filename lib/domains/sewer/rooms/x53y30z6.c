inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 30, 6 }));
  set_short( "Passage - x53y30z6" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y30z6.c",
  "east" : DIR+"/rooms/x54y30z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
