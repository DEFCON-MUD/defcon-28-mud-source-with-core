inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 9 }));
  set_short( "Hallway - x61y57z9" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z9.c",
  "south" : DIR+"/rooms/x61y56z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
