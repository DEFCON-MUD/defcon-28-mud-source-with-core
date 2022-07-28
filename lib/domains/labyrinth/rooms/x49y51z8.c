inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 51, 8 }));
  set_short( "Corridor - x49y51z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y52z8.c",
  "south" : DIR+"/rooms/x49y50z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
