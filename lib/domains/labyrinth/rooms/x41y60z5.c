inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 5 }));
  set_short( "Corridor - x41y60z5" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y60z5.c",
  "south" : DIR+"/rooms/x41y59z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
