inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 43, 1 }));
  set_short( "Passage - x17y43z1" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y44z1.c",
  "south" : DIR+"/rooms/x17y42z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
