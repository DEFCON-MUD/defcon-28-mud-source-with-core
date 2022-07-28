inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 58, 1 }));
  set_short( "Corridor - x37y58z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y58z1.c",
  "north" : DIR+"/rooms/x37y59z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
