inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 6 }));
  set_short( "Hallway - x29y8z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y8z6.c",
  "south" : DIR+"/rooms/x29y7z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
