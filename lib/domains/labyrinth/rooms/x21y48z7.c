inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 48, 7 }));
  set_short( "Hallway - x21y48z7" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y48z7.c",
  "east" : DIR+"/rooms/x22y48z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
