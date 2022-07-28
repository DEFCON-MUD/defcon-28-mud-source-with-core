inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 16, 8 }));
  set_short( "Hallway - x41y16z8" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y17z8.c",
  "south" : DIR+"/rooms/x41y15z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
