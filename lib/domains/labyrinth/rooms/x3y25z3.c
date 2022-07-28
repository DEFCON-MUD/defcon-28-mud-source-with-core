inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 25, 3 }));
  set_short( "Passage - x3y25z3" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y26z3.c",
  "south" : DIR+"/rooms/x3y24z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
