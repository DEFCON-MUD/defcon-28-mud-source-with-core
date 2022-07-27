inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 30, 1 }));
  set_short( "Corridor - x45y30z1" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y30z1.c",
  "north" : DIR+"/rooms/x45y31z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
