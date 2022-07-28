inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 39, 5 }));
  set_short( "Corridor - x49y39z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y40z5.c",
  "south" : DIR+"/rooms/x49y38z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
