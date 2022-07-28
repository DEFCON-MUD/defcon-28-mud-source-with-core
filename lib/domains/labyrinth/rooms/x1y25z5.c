inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 5 }));
  set_short( "Corridor - x1y25z5" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z5.c",
  "south" : DIR+"/rooms/x1y24z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
