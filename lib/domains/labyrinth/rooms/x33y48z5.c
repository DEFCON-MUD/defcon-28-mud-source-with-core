inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 5 }));
  set_short( "Corridor - x33y48z5" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y48z5.c",
  "south" : DIR+"/rooms/x33y47z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
