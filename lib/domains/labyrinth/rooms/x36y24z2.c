inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 24, 2 }));
  set_short( "Passage - x36y24z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y24z2.c",
  "east" : DIR+"/rooms/x37y24z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
