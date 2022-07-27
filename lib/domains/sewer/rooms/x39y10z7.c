inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 10, 7 }));
  set_short( "Corridor - x39y10z7" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y10z7.c",
  "east" : DIR+"/rooms/x40y10z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
