inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 9, 5 }));
  set_short( "Corridor - x45y9z5" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y10z5.c",
  "south" : DIR+"/rooms/x45y8z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
