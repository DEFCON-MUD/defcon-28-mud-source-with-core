inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 2 }));
  set_short( "Hallway - x36y42z2" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z2.c",
  "east" : DIR+"/rooms/x37y42z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
