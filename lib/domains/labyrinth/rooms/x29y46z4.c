inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 4 }));
  set_short( "Passage - x29y46z4" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y46z4.c",
  "south" : DIR+"/rooms/x29y45z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
