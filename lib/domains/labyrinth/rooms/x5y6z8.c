inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 8 }));
  set_short( "Corridor - x5y6z8" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y6z8.c",
  "north" : DIR+"/rooms/x5y7z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
