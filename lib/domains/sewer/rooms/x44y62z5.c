inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 5 }));
  set_short( "Passage - x44y62z5" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z5.c",
  "east" : DIR+"/rooms/x45y62z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
