inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 42, 1 }));
  set_short( "Hallway - x9y42z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y43z1.c",
  "south" : DIR+"/rooms/x9y41z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
