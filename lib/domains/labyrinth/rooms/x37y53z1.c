inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 53, 1 }));
  set_short( "Hallway - x37y53z1" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y54z1.c",
  "south" : DIR+"/rooms/x37y52z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
