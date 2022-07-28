inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 1 }));
  set_short( "Hallway - x41y21z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z1.c",
  "south" : DIR+"/rooms/x41y20z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
