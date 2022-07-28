inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 6 }));
  set_short( "Passage - x3y22z6" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y23z6.c",
  "south" : DIR+"/rooms/x3y21z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
