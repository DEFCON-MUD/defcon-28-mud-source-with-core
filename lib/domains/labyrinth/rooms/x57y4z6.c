inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 4, 6 }));
  set_short( "Hallway - x57y4z6" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y4z6.c",
  "north" : DIR+"/rooms/x57y5z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
