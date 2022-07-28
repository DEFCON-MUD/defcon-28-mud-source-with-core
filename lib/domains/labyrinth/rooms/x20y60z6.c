inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 60, 6 }));
  set_short( "Corridor - x20y60z6" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y60z6.c",
  "east" : DIR+"/rooms/x21y60z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
