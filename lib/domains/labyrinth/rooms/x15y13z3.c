inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 13, 3 }));
  set_short( "Hallway - x15y13z3" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y14z3.c",
  "south" : DIR+"/rooms/x15y12z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
