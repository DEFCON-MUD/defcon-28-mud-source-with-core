inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 19, 0 }));
  set_short( "Corridor - x27y19z0" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y20z0.c",
  "south" : DIR+"/rooms/x27y18z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
