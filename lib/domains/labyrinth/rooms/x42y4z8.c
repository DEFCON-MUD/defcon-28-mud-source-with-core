inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 4, 8 }));
  set_short( "Hallway - x42y4z8" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y4z8.c",
  "east" : DIR+"/rooms/x43y4z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
