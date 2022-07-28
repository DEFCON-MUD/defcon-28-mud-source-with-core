inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 8 }));
  set_short( "Passage - x17y46z8" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y46z8.c",
  "south" : DIR+"/rooms/x17y45z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
