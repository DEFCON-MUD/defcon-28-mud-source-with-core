inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 2 }));
  set_short( "Hallway - x19y50z2" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z2.c",
  "north" : DIR+"/rooms/x19y51z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
