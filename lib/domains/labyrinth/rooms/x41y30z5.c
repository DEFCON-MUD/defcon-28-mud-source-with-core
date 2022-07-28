inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 30, 5 }));
  set_short( "Hallway - x41y30z5" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y30z5.c",
  "east" : DIR+"/rooms/x42y30z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
