inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 22, 2 }));
  set_short( "Hallway - x50y22z2" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y22z2.c",
  "east" : DIR+"/rooms/x51y22z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
