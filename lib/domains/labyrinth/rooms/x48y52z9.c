inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 52, 9 }));
  set_short( "Passage - x48y52z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y52z9.c",
  "east" : DIR+"/rooms/x49y52z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
