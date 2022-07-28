inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 44, 7 }));
  set_short( "Corridor - x9y44z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y44z7.c",
  "south" : DIR+"/rooms/x9y43z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
