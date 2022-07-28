inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 7 }));
  set_short( "Hallway - x11y42z7" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y42z7.c",
  "south" : DIR+"/rooms/x11y41z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
