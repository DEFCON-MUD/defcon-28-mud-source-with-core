inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 7 }));
  set_short( "Corridor - x61y52z7" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y53z7.c",
  "south" : DIR+"/rooms/x61y51z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
