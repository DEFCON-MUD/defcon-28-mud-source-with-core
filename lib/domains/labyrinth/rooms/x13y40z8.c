inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 8 }));
  set_short( "Hallway - x13y40z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y41z8.c",
  "south" : DIR+"/rooms/x13y39z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
