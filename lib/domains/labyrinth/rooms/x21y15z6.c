inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 6 }));
  set_short( "Corridor - x21y15z6" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z6.c",
  "south" : DIR+"/rooms/x21y14z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
