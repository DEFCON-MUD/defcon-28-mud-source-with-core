inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 22, 5 }));
  set_short( "Corridor - x36y22z5" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y22z5.c",
  "east" : DIR+"/rooms/x37y22z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
