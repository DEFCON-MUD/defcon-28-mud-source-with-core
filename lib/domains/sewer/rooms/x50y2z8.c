inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 2, 8 }));
  set_short( "Passage - x50y2z8" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y2z8.c",
  "east" : DIR+"/rooms/x51y2z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
