inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 0 }));
  set_short( "Hallway - x43y4z0" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y4z0.c",
  "north" : DIR+"/rooms/x43y5z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
