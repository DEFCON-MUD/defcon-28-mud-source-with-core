inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 9 }));
  set_short( "Hallway - x55y56z9" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y56z9.c",
  "east" : DIR+"/rooms/x56y56z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
