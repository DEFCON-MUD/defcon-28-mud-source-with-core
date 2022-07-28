inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 1 }));
  set_short( "Corridor - x43y50z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y50z1.c",
  "east" : DIR+"/rooms/x44y50z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
