inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 0 }));
  set_short( "Corridor - x9y38z0" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y38z0.c",
  "south" : DIR+"/rooms/x9y37z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
