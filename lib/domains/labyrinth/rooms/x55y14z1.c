inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 1 }));
  set_short( "Hallway - x55y14z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y14z1.c",
  "east" : DIR+"/rooms/x56y14z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
