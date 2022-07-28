inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 18, 7 }));
  set_short( "Hallway - x11y18z7" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y19z7.c",
  "south" : DIR+"/rooms/x11y17z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
