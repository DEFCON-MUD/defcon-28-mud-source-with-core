inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 4 }));
  set_short( "Hallway - x15y12z4" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y12z4.c",
  "east" : DIR+"/rooms/x16y12z4.c",
  "north" : DIR+"/rooms/x15y13z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
