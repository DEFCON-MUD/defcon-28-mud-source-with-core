inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 28, 4 }));
  set_short( "Hallway - x53y28z4" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y28z4.c",
  "north" : DIR+"/rooms/x53y29z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
