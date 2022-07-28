inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 58, 5 }));
  set_short( "Passage - x55y58z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y58z5.c",
  "south" : DIR+"/rooms/x55y57z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
