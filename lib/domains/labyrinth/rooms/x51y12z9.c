inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 9 }));
  set_short( "Passage - x51y12z9" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y12z9.c",
  "south" : DIR+"/rooms/x51y11z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
