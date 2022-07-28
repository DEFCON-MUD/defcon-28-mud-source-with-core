inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 5, 7 }));
  set_short( "Corridor - x37y5z7" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y6z7.c",
  "south" : DIR+"/rooms/x37y4z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
